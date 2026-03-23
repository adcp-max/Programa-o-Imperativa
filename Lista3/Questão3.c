#include <stdio.h>

int main(){

    char vect[101]={0}, p1[101]={0}, p2[101]={0}, letras1[26]={0}, letras2[26]={0};
    int n=0, m=0, pares=0, primeiraPalavra=1, primeiraPalavra2=1, indice;

    fgets(vect, 101, stdin);

    for(int i=0;i<=100;i++){
        if (vect[i]>=65 && vect[i]<=90 || vect[i]>=97 && vect[i]<=122) {
            if (primeiraPalavra==1) primeiraPalavra = 0;
            p1[n] = vect[i];
            n++;
        }else if (primeiraPalavra==0){
            for(int j=i;i<101;j++){
                if (vect[j]>=65 && vect[j]<=90 || vect[j]>=97 && vect[j]<=122){
                    if (primeiraPalavra2==1) primeiraPalavra2=0;
                    p2[m] = vect[j];
                    m++;
                }else if (primeiraPalavra2==0){
                    if(m==n){
                        for (int k=0;k<n;k++){
                            indice = p1[k]-97;
                            if (p1[k] < 97) indice+=32;
                            letras1[indice]++;
                        }
                        for (int h=0;h<m;h++){
                            indice = p2[h]-97;
                            if (p2[h] < 97) indice+=32;
                            letras2[indice]++;
                        }
                        if (letras1==letras2){
                            if (pares==0){
                                printf("Pares de anagramas encontrados:\n");
                            }
                            pares++;
                            printf("%s e %s\n", p1, p2);
                        }
                    }
                }
            }
        }
    }

    if (pares==0){
        printf("Nao existem anagramas na frase.");
    }else{
        printf("Total de pares: %d", pares);
    }

    return 0;
}
