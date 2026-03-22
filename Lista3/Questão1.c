#include <stdio.h>

int main(){

    int vetor[100]={0}, t;

    scanf("%d", &t);

    for(int i=0;i<t;i++){
        int n, aux, cmc_seq=-1, cmc_maior=-1, n_seq=0, maior_seq=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++){
            scanf("%d", &aux);
            vetor[j] = aux;
            if (j!=0 && (vetor[j] > vetor[j-1] || vetor[j] == vetor[j-1])){
                if (maior_seq<n_seq){
                    maior_seq = n_seq;
                    cmc_maior = cmc_seq;
                }
                n_seq=0;
                cmc_seq = -1;
            }else if (j!=0 && vetor[j] < vetor[j-1]){
                if (cmc_seq==-1){
                    cmc_seq = j-1;
                    n_seq++;
                }
                n_seq++;
            }
        }
        if (maior_seq<n_seq){
            maior_seq = n_seq;
            cmc_maior = cmc_seq;
        }
        printf("%d\n", maior_seq);
        if (maior_seq>0){
            for(int k=0; k<maior_seq;k++){
                printf("%d ", vetor[k+cmc_maior]);
            }
            printf("\n");
        }
    }

    return 0;
}
