#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct pessoas{ //criação da struct
    int idade;
    float altura;
    char nome[TAM];
};

typedef struct pessoas pessoas;

    pessoas p[TAM];  //criação das variaveis globais
    int i = 0;
    char fim;
    int cont = 0;
    int user = 0;


void dados(){               //criação da function para armazenar os dados
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

void lista (){                 //criação da function para listar as pessoas
    for(i = 0; i < cont;i++){

        printf("---------- pessoa %d -----------", i+1);
        printf("\nNome:%s", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %.2f \n\n\n", p[i].altura);
    }
}

void mudar (){                   //criação da function para alterar os dados
    puts("deseja alterar algum usuario? S/N");  //confirmação de intenção de interação
    scanf("%c", &fim);
    fflush(stdin);

    while(fim == 's' || fim == 'S' ){   //estrutura de decisão para entrar no ciclo de repetição

    printf("\nQual usuario deseja alterar entre 1 e %d? \n", cont);
    scanf("%d", &user);
    fflush(stdin);

    if( user > cont || user < 1){      //caso informe um usuario que não existe
            system("cls");
        puts("INVALIDO");
    }else{

    system("cls");

    puts("\ndeseja alterar o nome? S/N");  //confirmação de intenção de alteração do nome do cliente
    scanf("%c", &fim);
    fflush(stdin);


    if(fim == 's' || fim == 'S' ){
    printf("Qual o novo nome da pessoa %d?\n", user);  //se confirmada, a alteração do nome
    fgets(p[user-1].nome,TAM,stdin);
    fflush(stdin);
    }else{}


    puts("\ndeseja alterar a idade? S/N");  //confirmação de intenção de alteração da idade do cliente
    scanf("%c", &fim);
    fflush(stdin);


    if(fim == 's' || fim == 'S' ){
    printf("Qual a nova idade da pessoa %d? \n", user); //se confirmada, a alteração da idade
    scanf("%d", &p[user-1].idade);
    fflush(stdin);
    }else{}

    puts("\ndeseja alterar a altura? S/N");      //confirmação de intenção de alteração da altura do cliente
    scanf("%c", &fim);
    fflush(stdin);


    if(fim == 's' || fim == 'S' ){
    printf("Qual a nova altura da pessoa %d? \n", user);  //se confirmada, a alteração da altura
    scanf("%f", &p[user-1].altura);
    fflush(stdin);
    }else{}


    puts("\n\nDeseja alterar mais pessoas? S/N\n");  //confirmação se deseja continuar alterado pessoas
    scanf("%c", &fim);
    fflush(stdin);
    }}}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op= 0;

    do{

    printf("---------- MENU ---------- \n\n1.add pessoas \n2.listar pessoas \n3.alterar \n4.sair\n");   //MENU de interação
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

        break;
    case 3:
        system ("cls");
        mudar();
        break;
    case 4:
        system ("cls");
        return 0 ;

    default:
        puts("Opção invalida");
    }

    } while( op!= 4);
}
