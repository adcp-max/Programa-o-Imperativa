#include <stdio.h>

int main(){

    int n, x, y, z, vencedor=0, venceHora, venceMinuto, latas=0, total_latas=0, tempo=0, horas=0, minutos=0, sim=0, latasCliente=0, ordemErrada=2;
    char w[6];

    scanf("%d %d %d", &n, &x, &y);

    if (y>0){
        scanf("%5s %d", w, &z);
        horas = (w[1]-48) + (w[0]-48)*10;
        minutos = (w[4]-48) + (w[3]-48)*10;
        horas-=7;
        minutos += horas*60;
        y--;
    }

    for(int i=1; i<=n;i++){
        latas=0;
        ordemErrada++;
        tempo+=3;
        if (tempo==minutos || ordemErrada==1){
            latas=z;
            if (y>0){
                scanf("%5s %d", w, &z);
                horas = (w[1]-48) + (w[0]-48)*10;
                minutos = (w[4]-48) + (w[3]-48)*10;
                horas-=7;
                minutos += horas*60;
                y--;
                if (tempo>minutos){
                    ordemErrada = 0;
                }
            }
        }else{
            if (x!=0){
                if (i%x==0){
                    latas=1;
                }
            }
        }
        total_latas+=latas;
        if (total_latas>=50 && sim==0){
            vencedor=i;
            latasCliente = latas;
            sim = 1;
            if (ordemErrada!=1){
                venceHora = (tempo/60)+7;
                venceMinuto = tempo % 60;
            }else{
                venceHora = horas+7;
                venceMinuto = minutos-horas*60;
            }
        }
    }

    if (vencedor>0){
        printf("Quem levou a cesta basica foi o %d* cliente atendido por coragem, as ", vencedor);
        if (venceHora<10) printf("0");
        printf("%d:", venceHora);
        if (venceMinuto<10) printf("0");
        printf("%d. Que comprou %d lata", venceMinuto, latasCliente);
        if (latasCliente>1){
            printf("s");
        }
    }else{
        printf("Ainda nao foram vendidas latas suficientes. Falta");
        if (50-total_latas>1){
            printf("m %d latas", 50-total_latas);
        }else{
            printf(" 1 lata");
        }
    }

    printf(".");
    
    return 0;
}
