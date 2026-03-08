#include <stdio.h>

int main(){

    int total, rebeka=3;
    float x, px, y, py, z, pz;

    scanf("%d %f %f %f", &total, &px, &py, &pz);

    x = total*px/100;
    y = total*py/100;
    z = total*pz/100;

    if (x == (int) x && y == (int) y && z == (int) z){
        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
        int resto = total - (x + y + z);
        if (resto > 0){
            rebeka += resto;
        }
    }else{
        total++;
        rebeka--;

        x = total*px/100;
        y = total*py/100;
        z = total*pz/100;
        int resto = total - (x + y + z);

        if (x == (int) x && y == (int) y && z == (int) z && resto > 1){
            printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
            rebeka += resto;
        }else{ 
            total++;
            rebeka--;

            x = total*px/100;
            y = total*py/100;
            z = total*pz/100;
            resto = total - (x + y + z);

            char a, b, c;
            getchar();
            scanf("%c %c %c", &a, &b, &c);
            if (a<91){
                a += 32;
            }
            if (b<91){
                b += 32;
            }
            if (c<91){
                c += 32;
            }
            a -= 96;
            b -= 96;
            c -= 96;
            int soma = a + b + c;
            printf("%d\n", soma);

            if (x == (int) x && y == (int) y && z == (int) z && resto > 2){
                printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
                rebeka += resto;
            }else{
                total++;
                rebeka--;

                x = total*px/100;
                y = total*py/100;
                z = total*pz/100;
                resto = total - (x + y + z);

                //condição idade

                int i1, i2, i3, qtdParcelas;

                scanf("%d %d %d", &i1, &i2, &i3);

                if (i1 % 3 == 0 || i2 % 3 == 0 || i3 % 3 == 0){
                    qtdParcelas = (int) i1/3;
                    qtdParcelas += (int) i2/3;
                    qtdParcelas += (int) i3/3;
                    printf("%d\n", qtdParcelas);                    
                }

                if (x == (int) x && y == (int) y && z == (int) z && resto > 3){
                    printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
                    rebeka += resto;
                }else{
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
        }      
    }

    if (rebeka < 7){
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    } else{
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }

    return 0;
}
