#include <stdio.h>

int main(){

    long int n, k, p, numero=0;
    int num, fatores, ultifat, teveBreak=0, d, t=0, q=0;

    scanf("%ld %ld %ld", &n, &k, &p);

    for (int i = n; i < k; i++){
        fatores = 0, ultifat=0,teveBreak=0, num = i, d = 3;
        while (d<=i){
            if (num % d == 0){
                num /= d;
                fatores++;
                if (ultifat==d || fatores > p){
                    teveBreak = 1;
                    break;
                }
                ultifat = d;
            }else{
                d += 2;
            }
        }
        if (fatores == p && teveBreak == 0){
            if (t == 1){
                q++;
            }
            if (t == 0){
                numero = i;
                t = 1;
            }
        }
    }

    if (t == 1){
        printf("%ld %d", numero, q);
    }else{
        printf("Poxa dudinha, me desculpa, nao achei os numeros mas vou te mandar uma foto de um gatinho fofo.");
    }

    return 0;
}
