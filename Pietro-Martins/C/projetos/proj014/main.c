#include <stdio.h>
#include <stdlib.h>
#include "maior.h"

int main()
{
    int a;
    int b;
    printf("diga dois numeros para comparação\n");
    scanf("%d",&a);
    fflush(stdin);

    puts("diga outro numero\n");
    scanf("%d",&b);
    fflush(stdin);

    printf("o maior numero eh %d",maior(a,b));
    return 0;
}
