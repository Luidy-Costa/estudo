#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char senha_fonte[10] = {"beleza"};
    char senha_tentativa[10];
    int i;

    printf("digite a senha \n");

    gets(senha_tentativa);
    fflush(stdin);

    i = strcmp(senha_fonte, senha_tentativa);

    if(i == 0){
        printf("permissão concedida");
    }else{
    printf("permissão negada");
    }

    return 0;
}
