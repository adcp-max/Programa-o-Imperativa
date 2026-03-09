#include <stdio.h>

int main(){

    int dia1, dia2, mes1, mes2, ano1, ano2;

    scanf("%d/%d/%d %d/%d/%d", &dia1, &mes1, &ano1, &dia2, &mes2, &ano2);

    //Amor

    int amor = dia1 + dia2 + mes1 + mes2 + ano1 + ano2;
    amor *= 7;
    amor %= 101;

    printf("Amor: %d%% ", amor);
    if (amor < 20){
        printf("Pessimo dia para se apaixonar.");
    } else if (amor <= 40){
        printf("Melhor manter o coracao <3 longe de perigo.");
    }else if (amor < 70){
        printf("Se o papo e as ideias baterem, esta liberado pensar em algo.");
    } else if (amor <= 80){
        printf("Saia com o coracao aberto, mas lembre, nem toda troca de olhar em onibus e sinal de romance.");
    }else{
        printf("Um dia deslumbrantemente lindo para amar. Ps: Cuidado com a intensidade.");
    }
    printf("\n");

    //Sorte

    int sorte = (dia1 + dia2 + mes1 + mes2)*9;
    int diff = ano2 - ano1;
    sorte += diff;
    sorte %= 101;

    printf("Sorte: %d%% ", sorte);

    if (sorte < 30){
        printf("Nem jogue moedas pra cima hoje.");
    } else if (30 <= sorte && sorte <= 50){
        printf("Melhor nao arriscar.");
    }else if (50 < sorte && sorte < 80){
        printf("Por sua conta em risco.");
    } else if (sorte >= 80 && sorte <= 90){
        printf("Hoje vale a pena arriscar.");
    }else{
        printf("Nao tenha medo de virar cartas hoje.");
    }
    printf(" Sem tigrinho nem jogos de azar, por favor!\n");

    //Trabalho

    int trabalho = ano1 + ano2 -(dia1 + dia2 + mes1 + mes2)*8;
    trabalho %= 101;

    printf("Trabalho: %d%% ", trabalho);

    if (trabalho < 40){
        printf("Hoje nao sera um dia tao proveitoso, keep calm e faca o basico.");
    } else if (40 <= trabalho && trabalho <= 50){
        printf("Segura a emocao, nao xinga ninguem, nao esquece de beber agua.");
    }else if (50 < trabalho && trabalho < 70){
        printf("Por sua conta em risco.");
    } else if (70 <= trabalho && trabalho <= 85){
        printf("Boas vibracoes hoje, chances podem estar ao seu redor.");
    }else{
        printf("Use do maximo de networking poss�vel hoje, dia bom para negocios.");
    }
    int cor = (dia1*dia1 + dia2*dia2 + mes1*mes1 + mes2*mes2 + ano1*ano1 + ano2*ano2) % 11;

    printf("\n");

    switch (cor){
        case 0:
            printf("Cor: Cinza.");
            break;
        case 1:
            printf("Cor: Vermelho.");
            break;
        case 2:
            printf("Cor: Laranja.");
            break;
        case 3:
            printf("Cor: Amarelo.");
            break;
        case 4:
            printf("Cor: Verde.");
            break;
        case 5:
            printf("Cor: Azul.");
            break;
        case 6:
            printf("Cor: Roxo.");
            break;
        case 7:
            printf("Cor: Marrom.");
            break;
        case 8:
            printf("Cor: Rosa.");
            break;
        case 9:
            printf("Cor: Preto.");
            break;
        case 10:
            printf("Cor: Branco.");
            break;
        default:
            printf("");
    }


    return 0;
}
