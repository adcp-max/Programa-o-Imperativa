#include <stdio.h>

int main(){

    int q, x, coluna = 0, colunaMax=0, teveBreak=0;
    char c, anterior=' ';

    scanf("%d", &q);

    for(int i = 0;i<q;i++){
        if (teveBreak==1) break;
        scanf("%d %c", &x, &c);
        for(int j = 0; j<x;j++){
            if (c=='D'){
                if (coluna != colunaMax && anterior != 'D'){
                    for(int k=0;k<=colunaMax-coluna;k++) printf(" ");
                }
                if (anterior=='B') printf(".");
                coluna++;
                if (coluna > colunaMax) colunaMax = coluna;
                printf(".");
                anterior = 'D';
            }else if (c == 'B'){
                printf("\n");
                if (x-j != 1){
                    for (int k = 1;k <coluna;k++){
                        printf(" ");
                    }
                    printf(".");
                }
                anterior = 'B';
            }else if (c == 'E' && anterior != 'E'){
                if (coluna-x < 0){
                    teveBreak = 1;
                    break;
                }
                if (coluna > colunaMax) colunaMax = coluna;
                coluna--;
                for (int k=0;k<coluna-x;k++) printf(" ");
                for (int k=0;k<x;k++) printf(".");
                if (anterior=='B') printf(".");
                anterior = 'E';
            }else coluna--;
        }
    }
    if (teveBreak==1){
        printf("Informacao invalida");
    }else if (anterior=='B') {
        for (int k = 0;k <coluna-1;k++){
            printf(" ");
        }
        printf(".");
    }

    return 0;
}
