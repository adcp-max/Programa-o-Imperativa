#include <stdio.h>

int limpaQuebra(){
    getchar();
}

int main(){

    int m,n;
    char matriz[5][5]= {0}, aux;

    scanf("%d %d", &m, &n);
    limpaQuebra();
    
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%c", &aux);
            matriz[i][j] = aux;
        }
        limpaQuebra();
    }

    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (matriz[i][j] == '-'){
                if(matriz[i+1][j+1]=='P') matriz[i][j] = 'x';
                if (j-1>=0 && i-1>=0) if (matriz[i-1][j-1]=='P') matriz[i][j] = 'x';
                if (i-1>=0) if (matriz[i-1][j+1]=='P') matriz[i][j] = 'x';
                if (j-1>=0) if (matriz[i+1][j-1]=='P') matriz[i][j] = 'x';

                if(matriz[i+1][j]=='P') matriz[i][j] = '+';
                if (matriz[i][j+1]=='P') matriz[i][j] = '+';
                if (i-1>=0) if (matriz[i-1][j]=='P') matriz[i][j] = '+';
                if (j-1>=0) if (matriz[i][j-1]=='P') matriz[i][j] = '+';
            }
        }
    }
    
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
