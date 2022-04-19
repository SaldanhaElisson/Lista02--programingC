#include <stdio.h>
#include <ctype.h>

int main(){
    // entradas
    int numeroDigitado;
    int totalDeVotos[4] = {0};

    // INTERFACE
    printf(" \n");
    printf("ELEIÇÕES 2022 \n");
    printf("\n");
    printf("5-PAULA\n");
    
    printf("7-RENATA \n");
    
    printf("0-BRANCO \n");

    printf("QULQUER OUTRO NUMERO SERÁ CONSIDERADO NULO \n");
    printf("\n");
  
    // sistema de voto
    while (1)
    {   

        printf("Digite o número do candidato para votar: \n");
        scanf("%d", &numeroDigitado);

          // se o numero for negavito vai sair do programa
        if(numeroDigitado < 0){
            break;
        } else if(isalpha(numeroDigitado)){
            break;
        }

        
        switch (numeroDigitado)
        {
            case 7:
                numeroDigitado = 1;
                break;

            case 5:
                numeroDigitado = 2;
                break;

            case 0:
                numeroDigitado = numeroDigitado;
                break;
            default:
                numeroDigitado = 3;
                break;
        }

        // BRANCO = INDICE 0
        // RENATA = indice 1
        // PAULO = indice 2
        // NULO = INDICE 3;

        // vai incrimetar de acordo com o votor da pessoa
        ++totalDeVotos[numeroDigitado];

    }
        


        printf("%d \n", totalDeVotos[0]);

    return 0;
}