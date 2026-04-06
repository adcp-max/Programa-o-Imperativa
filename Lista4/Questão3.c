#include <stdio.h>

void printar(int x, int y){
    printf("Coordenada X: %d, Y: %d", x, y);
}

int main(){

    int yatual=0, xatual=0, matriz[4][4] = {{0, 1, 1, 0}, {1, 2, 5, 2}, {1, 1, 2, 1}, {0, 1, 1, 1}};
    char n;

    for(int k=0;k<20;k++){
        scanf("%c", &n);
        if (n=='c'){
            yatual+=1;
            matriz[yatual][xatual] +=1;
        }else if(n=='b'){
            yatual-=1;
            matriz[yatual][xatual] +=1;
        }else if(n=='d'){
            xatual+=1;
            matriz[yatual][xatual] +=1;
        }else if(n=='e'){
            xatual-=1;
            matriz[yatual][xatual] +=1;
        }
    }

    int maiorValor=0, maiorX=0, maiorY=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(matriz[i][j]>maiorValor){
                maiorX = j;
                maiorY = i;
                maiorValor= matriz[i][j];
            }
        }
    }

    printar(maiorX, maiorY);

    return 0;
}
