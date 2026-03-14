#include <stdio.h>

int main (){

    long long a, b, n;
    scanf("%lld", &n);
    scanf("%lld %lld", &a, &b);

    long long somaFinal, somaN, somaMultiplosA, somaMultiplosB, qtdMultiploA, qtdMultiploB, qtdMultiplosAB, intersec;
    
    somaN = n*(n+1)/2;
    
    qtdMultiploA = n/a;
    
    somaMultiplosA = ((a + qtdMultiploA*a)*qtdMultiploA)/2;
    
    qtdMultiploB = n/b;
    
    somaMultiplosB = ((b + qtdMultiploB*b)*qtdMultiploB)/2;
    
    qtdMultiplosAB = n/(a*b);
    
    intersec = ((a*b + qtdMultiplosAB*a*b)*qtdMultiplosAB)/2;
    
    somaFinal = somaN - somaMultiplosA - somaMultiplosB + intersec;
    
    printf("%lld\n", somaFinal);
    
    
    if (somaFinal % 2 == 0){
        printf("L� ele!!!");
    }else{
        printf("Opa xupenio AULAS...");
    }
    
    return 0;
}
