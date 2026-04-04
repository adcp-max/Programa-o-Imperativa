#include <stdio.h>

int main(){

    int n, m;
    char matriz[10][10] = {0}, aux;

    scanf("%d %d", &n, &m);
    getchar();
    
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%c", &aux);
            matriz[i][j] = aux;
        }
        getchar();
    }

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (matriz[i][j] == 'o'){
                if (matriz[i+1][j] == '.') matriz[i+1][j] = 'o';
                else if(matriz[i+1][j] == '#'){
                    for(int l=j; l<=m;l++){
                        if(matriz[i][l]=='.' && matriz[i+1][l-1]=='#'){
                            matriz[i][l] = 'o';
                            if(matriz[i+1][l]=='.') matriz[i+1][l]='o';
                        }
                    }
                    for(int k=j; k>=0;k--){
                        if(matriz[i][k]=='.' && matriz[i+1][k+1]=='#'){
                            matriz[i][k] = 'o';
                            if(matriz[i+1][k]=='.') matriz[i+1][k]='o';
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
