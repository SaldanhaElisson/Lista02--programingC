#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int somaDeTodosOsnumeros = 0;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    if(numero1 > numero2 ){
        numero1 = numero1 ^ numero2;
        numero2 = numero1 ^ numero2;
        numero1 = numero2 ^ numero1;
    }

    for( ; numero1 < numero2 + 1; numero1++){
        if(!(numero1 % 2)){
            somaDeTodosOsnumeros += numero1;
        }
    }

    printf("A soma de todos os numeros pares é: %d \n", somaDeTodosOsnumeros);

    return 0;
}