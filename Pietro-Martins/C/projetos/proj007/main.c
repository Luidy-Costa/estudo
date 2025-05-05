#include <stdio.h>

int main(){

char v[10];

printf ("escreva algo para o scanf (convencional) \n");
scanf("%s", v);
fflush(stdin);

printf("%s \n\n", v);

printf ("escreva algo para o scanf (aprimorado) \n");
scanf("%9[^\n]s", v);
fflush(stdin);

printf("%s \n\n", v);




puts("escreva algo para o gets \n");
gets(v);
fflush(stdin);

printf("O Resultado e \n %s \n\n", v);

printf("digite algo para o fgets \n");
fgets(v,10,stdin);
fflush(stdin);

printf("O Resultado e \n%s\n\n", v);

}
