#include <stdio.h>

#define texto "Valores de Entrada e Saida"

int main (){

    printf("%s. \n", texto);

    int idade = 0;
    float altura = 0.00;
    char nome[50] = "";

    printf("me diga sua idade. \n");
    scanf("%d", &idade);

    printf("me diga sua altura. \n");
    scanf("%f", &altura);

    printf("me diga seu nome. \n");
    scanf("%s", nome);

    printf("Nome: %s. \n", nome);
    printf("Altura: %.2f. \n", altura);
    printf("Idade: %d.", idade);

}
