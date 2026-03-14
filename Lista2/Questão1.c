#include <stdio.h>

int main(){

    char a;

    scanf("%c", &a);

    int n = a - 64;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n-i+1; j++){
            printf(".");
        }
        for(int k = 1; k < i; k++){
            printf("%c", k+64);
        }
        printf("%c", i+64);
        for(int k = i-1; k >= 1; k--){
            printf("%c", k+64);
        }
        for(int j = 1; j < n-i+1; j++){
            printf(".");
        }
        printf("\n");
    }
  
    return 0;
}
