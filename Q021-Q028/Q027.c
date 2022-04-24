#include <stdio.h>

int main(){
    int valorPresente = 0;
    int menorValor = 0;
    int maiorValor = 0;


    printf("Digite o primeiro valor: \n");
    scanf("%d", &valorPresente);
    menorValor = valorPresente;
    maiorValor = valorPresente;

    while (!(!(valorPresente % 2) && (valorPresente < 0)))
    {      
        // descobrindo o menor
        if(menorValor > valorPresente){
            menorValor = valorPresente;
        }
        // recebendo o maior valor   
        if(maiorValor < valorPresente){
            maiorValor = valorPresente;
        }

        printf("Digite mais um numero: \n" );
        scanf("%d", &valorPresente); 
    
    }
        printf("O produto entre maior e menor valor: %d \n", maiorValor * menorValor);

    return 0;
}