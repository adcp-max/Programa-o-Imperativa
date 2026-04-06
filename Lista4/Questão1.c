#include <stdio.h>

int fuga(char matriz[100][100], int yatual, int xatual, int mov, int novoMov){
    if(matriz[yatual][xatual]!='d' && mov>novoMov){
        if(matriz[yatual][xatual+1]=='_' || matriz[yatual][xatual+1]=='d'){
            if(matriz[yatual][xatual+1]=='d'){
                if (novoMov<mov) mov = novoMov;
                return mov+1;
            }else{
                mov=fuga(matriz, yatual, xatual+1, mov, novoMov+1);
            }
        }else if(matriz[yatual+1][xatual]=='_' || matriz[yatual+1][xatual]=='d'){
            if(matriz[yatual+1][xatual]=='d'){
                if (novoMov<mov) mov = novoMov;
                return mov+1;
            }else{
                mov=fuga(matriz, yatual+1, xatual, mov, novoMov+1);
            }
        }else if(matriz[yatual-1][xatual]=='_' || matriz[yatual-1][xatual]=='d'){
            if(matriz[yatual-1][xatual]=='d'){
                if (novoMov<mov) mov = novoMov;
                return mov+1;
            }else{
                mov=fuga(matriz, yatual-1, xatual, mov, novoMov+1);
            }
        }else if(matriz[yatual][xatual-1]=='_' || matriz[yatual][xatual-1]=='d'){
            if(matriz[yatual][xatual-1]=='d'){
                if (novoMov<mov) mov = novoMov;
                return mov+1;
            }else{
                mov=fuga(matriz, yatual, xatual-1, mov, novoMov+1);
            }
        }       
    }
    return mov;
}

int main(){

    int m, n, mov=1000, novoMov=0, yinicio, xinicio;
    char aux, matriz[100][100]={0};
    
    scanf("%d%c%d", &m, &aux, &n);
    getchar();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%c", &aux);
            if(aux=='o'){
                yinicio = i;
                xinicio = j;
            }
            matriz[i][j] = aux;
        }
        getchar();
    }

    mov = fuga(matriz, yinicio, xinicio, mov, novoMov);
    if (mov==0){
        printf("Poxa... Parece que nao foi dessa vez que Rebeka conseguiu fugir\n");
    }else{
        printf("Apos correr %d metros e quase desistir por causa da distância, Rebeka conseguiu escapar!\n", mov);
    }

    return 0;
}
