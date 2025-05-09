#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50
int main(){
    setlocale(LC_ALL,"Portuguese");
    char s1[N]= {"Lógica de"};
    char s2 [N]= {" Programação"};
    int i;


    printf("Antes do strcat\n");
    printf("%s \n", s1);
    printf("%s\n\n", s2);

    i=strlen(s1);

    printf("A string s1 contem %d caracteres \n\n", i);

    strcat(s1,s2);

    printf("Depois do strcat\n");
    printf("%s\n\n", s1);

    i=strlen(s1);

    printf("Agora a string s1 tem %d caracteres", i);

    return 0;
}
