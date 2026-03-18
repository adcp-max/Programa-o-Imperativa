#include <stdio.h>

int main(){

    int x, n, n1, n2, num=0, canalNum, minuto=0, nsequencia, a, b;

    scanf("%d %d", &x, &n);

    for(int i = 1;i <=n;i++){
        scanf("%d %d", &n1, &n2);
        int anterior = n1, atual = n2, sequencia = 0;
        nsequencia = 0;
        while (sequencia<x){
            if (nsequencia==1){
                sequencia = n1;
                nsequencia+=1;
            }else if (nsequencia==2){
                sequencia = n2;
                nsequencia+=1;
            }else{
                sequencia = anterior+atual;
                anterior = atual;
                atual = sequencia;
                nsequencia+=1;
            }
            a = x - num;
            b = x - sequencia;
            if (a<0) a = -a;
            if (b<0) b = -b;
            if (a>b){
                num = sequencia;
                canalNum = i;
                minuto = nsequencia;
            }else if (a==b){
                if (canalNum!=i){
                    num = sequencia;
                    canalNum = i;
                    minuto = nsequencia;
                }
            }
        }
    }
    printf("Xupenio, para ir ao lulupalooza vc deve entrar no canal %d e sera chamado mais ou menos no minuto %d", canalNum, minuto);
   
    int temp = num, vip = 0;
    while (temp > 0){
        vip += temp % 10;
        temp /= 10;

    }
    if (vip>10){
        printf(" e com o VIP garantido!!!");
    }else{
        printf(", mas o ingresso VIP n�o vai rolar :(");
    }
    printf("\n");


    return 0;
}
