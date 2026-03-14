#include <stdio.h>

int main(){

    int x, dx, passosx, y, dy, passosy, quadrante;

    scanf("%d %d %d", &x, &y, &quadrante);

    if (x > 0 && y > 0 && quadrante != 1 && quadrante != 3){
        dx = -1;
        dy = -1;
        passosx = dx - x;
        passosy = dy - y;
        if (passosx < 0){
            passosx = -passosx;
        }
        if (passosy < 0){
            passosy = -passosy;
        }
        if (quadrante == 2){
            printf("%d passos em y e %d passos em x", passosy, passosx);
        }else{
            printf("%d passos em x e %d passos em y", passosx, passosy);
        }
    }else if (x < 0 && y > 0 && quadrante != 2 && quadrante != 4){
        dx = 1;
        dy = -1;
        passosx = dx - x;
        passosy = dy - y;
        if (passosx < 0){
            passosx = -passosx;
        }
        if (passosy < 0){
            passosy = -passosy;
        }
        if (quadrante == 1){
            printf("%d passos em y e %d passos em x", passosy, passosx);
        }else{
            printf("%d passos em x e %d passos em y", passosx, passosy);
        }
    }else if (x < 0 && y < 0 && quadrante != 1 && quadrante != 3){
        dx = 1;
        dy = 1;
        passosx = dx - x;
        passosy = dy - y;
        if (passosx < 0){
            passosx = -passosx;
        }
        if (passosy < 0){
            passosy = -passosy;
        }
        if (quadrante == 4){
            printf("%d passos em y e %d passos em x", passosy, passosx);
        }else{
            printf("%d passos em x e %d passos em y", passosx, passosy);
        }
    }else if (x > 0 && y < 0 && quadrante != 2 && quadrante != 4){
        dx = -1;
        dy = 1;
        passosx = dx - x;
        passosy = dy - y;
        if (passosx < 0){
            passosx = -passosx;
        }
        if (passosy < 0){
            passosy = -passosy;
        }
        if (quadrante == 3){
            printf("%d passos em y e %d passos em x", passosy, passosx);
        }else{
            printf("%d passos em x e %d passos em y", passosx, passosy);
        }
    }else{
        printf("caminhada invalida");
    }
    printf("\n");
    
    return 0;
}
