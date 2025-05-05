#include <stdio.h>

int main(){

    int num = 0;
    int soma = 1;

    printf("digite um numero inteiro");
    scanf("%d", &num);

    for(int i = num; i > 0; i--){
        soma *= i;
    }

    printf("%d", soma);
}
