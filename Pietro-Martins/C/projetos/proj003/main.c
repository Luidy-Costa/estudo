#include <stdio.h>

int main(){
    int idade = 0;

    printf("Idade inicial oferecida eh %d. \n", idade);

    printf("Nos diga sua idade \n");
    scanf("%d",&idade);

    printf("Voce tem %d anos de idade atualmente \n", idade);
    printf("Voce tera %d anos de idade ano que vem \n", idade+1);
}
