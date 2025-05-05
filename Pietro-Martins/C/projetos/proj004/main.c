#include <stdio.h>

int main(){
    int num = 0;

    printf("escreva um numero. \n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d eh um numero par", num);
    }else{
        printf("%d eh um numero impar", num);
    }
}
