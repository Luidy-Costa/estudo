#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

struct pessoa{
    int idade;
    float peso;
    char nome[N];

};

typedef struct pessoa pessoa;

int main(){
    setlocale(LC_ALL,"Portuguese");

    pessoa p = {0,0.0,"nada"};

    printf("Antes da adição de dados. \n");

    printf("\nIdade: %d \n", p.idade);
    printf("Peso: %.2f \n", p.peso);
    printf("Nome: %s \n", p.nome);

    p.idade = 18;
    p.peso = 89.88;
    strcpy(p.nome,"Luiz Ricardo");

    printf("\nPós adição de dados em codigo. \n");

    printf("\nIdade: %d \n", p.idade);
    printf("Peso: %.2f \n", p.peso);
    printf("Nome: %s \n", p.nome);

    printf("\nQual a sua idade?\n");
    scanf("%d", &p.idade);
    fflush(stdin);

    printf("\nQual o seu peso?\n");
    scanf("%.2f", &p.peso);
    fflush(stdin);

    printf("Qual o seu nome?\n");
    fgets(p.nome,N,stdin);
    fflush(stdin);

    printf("\nPós adição de dados via cliente. \n");

    printf("\nIdade: %d \n", p.idade);
    printf("Peso: %.2f \n", p.peso);
    printf("Nome: %s \n", p.nome);



    return 0;
}
