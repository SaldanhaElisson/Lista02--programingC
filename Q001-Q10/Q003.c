#include <stdio.h>

int main(){
    unsigned int  fatorial = 0;
 
    printf("Digite um numero para calcular seu fatorial \n");
    scanf("%d", &fatorial);


    printf("%d a\n", fatorial);

    int i = fatorial - 1;

    while( i ){

        fatorial = fatorial * i;

         i--;
    }   


    printf("O fatorial do numero é : %d\n", fatorial);

    return 0;
}