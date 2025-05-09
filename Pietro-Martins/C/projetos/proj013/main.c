#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct pessoas{
    int idade;
    float altura;
    char nome[TAM];
};

typedef struct pessoas pessoas;

    pessoas p[TAM];
    int i = 0;
    char fim;
    int cont = 0;

void dados(){
   do{
    puts("qual o seu nome?");
    fgets(p[cont].nome,TAM,stdin);
    fflush(stdin);

    puts("\nQual a sua idade?");
    scanf("%d", &p[cont].idade);
    fflush(stdin);

    puts("\nQual a sua altura?");
    scanf("%f", &p[cont].altura);
    fflush(stdin);


    puts("\n\nDeseja adicionar mais pessoas?");
    scanf("%c", &fim);
    fflush(stdin);
    cont++;
   }while(fim == 'S' || fim == 's');
}

void lista (){
    for(i = 0; i < cont;i++){

        printf("---------- pessoa %d -----------", i+1);
        printf("\nNome:%s", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %.2f \n\n\n", p[i].altura);
    }
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op= 0;

    do{

    printf("1.add pessoas \n2.listar pessoas \n3.sair \n");
    scanf("%d", &op);
    fflush(stdin);

    switch (op){
    case 1:
        system ("cls");
        dados();
        system ("cls");
        break;

    case 2:
        system ("cls");
        lista();
        system ("cls");
        break;

    case 3:
        system ("cls");
        return 0 ;

    default:
        puts("Opção invalida");
    }

    } while( op != 8);
}
