#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50

struct pessoas {
    int idade;
    float altura;
    char nome[TAM];

};

typedef struct pessoas pessoas;

int main (){
    pessoas p[TAM];
    int cont = 0;
    char fim;

    do{
        puts("Qual o seu nome?");
        fgets(p[cont].nome,TAM,stdin);
        fflush(stdin);

        puts("\nQual a sua idade?");
        scanf("%d", &p[cont].idade);
        fflush(stdin);

        puts("\nQual a sua altura?");
        scanf("%f", &p[cont].altura);
        fflush(stdin);

        cont++;
        puts("\ndeseja registrar outra pessoa? S/N");
        scanf("%c", &fim);
        fflush(stdin);
    }while(fim == 'S' || fim == 's');

    system("cls");

    for(int i = 0; i < cont;i++){

        printf("---------- pessoa %d -----------", i+1);
        printf("\nNome:%s", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %.2f \n", p[i].altura);
    }



    return 0;
}
