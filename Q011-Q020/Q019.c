#include <stdio.h>

int main(){
    int inicio;
    int fim;
    float somaEMedia = 0;


    printf("Digite o inicio do intervalo fechado: \n");
    scanf("%d", &inicio);

    printf("Digite o fim do intervalo fechado: \n");
    scanf("%d", &fim);

    for( int i = inicio; i <= fim; i++){
        somaEMedia += i;
    }

    printf("A media Aritimetica dos inteiro no intevalo é: %.2f \n", somaEMedia/(fim - inicio));

    return 0;
}