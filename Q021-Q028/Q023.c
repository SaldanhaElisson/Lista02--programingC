#include <stdio.h>

int main(){
    int numero1;

    printf("Digite um numero \n");
    scanf("%d", &numero1);

    numero1 = (numero1 + 1) - (numero1 - 1);

    printf("%d\n", numero1); 

    return 0;
}