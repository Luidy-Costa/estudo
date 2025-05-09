#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char origem[20]= {"Ola, mundo!"};
    char destino[20];

    printf("antes do strcpy \n");
    printf("%s \n", origem);
    printf("%s \n\n", destino);

    strcpy(destino,origem);

    printf("depois do strcpy\n");
    printf("%s\n", origem);
    printf("%s\n", destino);

    return 0;
}
