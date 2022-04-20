#include <stdio.h>
#include <ctype.h>

int main(){
    // entradas
    int numeroDigitado;
    int totalDeVotos[4] = {0};
    char validando;

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
    for( ; ; )
    {   
        printf("\n");
        printf("Digite o número do candidato para votar: \n");
        scanf("%d", &numeroDigitado);


        // validando voto
        printf("\n");
        printf("Você tem certeza? [s|n] \n");
        validando = getchar();
        scanf("%c", &validando);

        if(validando == 'n' || validando ==! 's'){
            continue;
        }

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
        // processando resultados
        // variaveis dos resultados
        float resultados[3];
        // indice 0 -> porcetagem dos votos em brancos
        // indice 1 -> porcetagem dos votos da  Renata
        // indice 2 -> porcetagem dos votos do Paulo

        // calculando porcetagem dos votos do Paulo
        resultados[2] = (float)totalDeVotos[1] / (totalDeVotos[0] + totalDeVotos [1] + totalDeVotos[2]) * 100;

        // calculando porcetagem dos votos da Renata
        resultados[1] = (float)totalDeVotos[1] / (totalDeVotos[0] + totalDeVotos [1] + totalDeVotos[2]) * 100;
        
        // calculando porcetagem dos votos em branco
        resultados[0] = (float)totalDeVotos[0] / (totalDeVotos[0] + totalDeVotos [1] + totalDeVotos[2]) * 100;

        // imprimindo resultados
        printf("\n");
        printf("RESULTADOS DAS ELEIÇÕES \n");
        printf("%.2f %% dos votos foram da Renata \n", resultados[1]);
        printf("%.2f %% dos votos foram do Paulo \n", resultados[2]);
        printf("%.2f %% dos votos foram em Branco \n", resultados[0]);
        printf("TOTAL DE VOTOS: %d \n" , totalDeVotos[0] + totalDeVotos [1] + totalDeVotos[2]);



    return 0;
}