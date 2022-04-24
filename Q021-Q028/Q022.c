#include <stdio.h>
#include <string.h>

int main(){
    char numeroStrin[100];
    int tamanho;
    int somador = 0;
    
    printf("Digite um numero inteiro: \n");
    scanf("%s", numeroStrin);

    tamanho = strlen(numeroStrin);

    for(int i = 0; i < tamanho; i++){
        if(numeroStrin[i] == '7'){
            somador ++;
        }
    }

    printf("A quantidade de algarismos 7 no numero é: %d \n", somador);

    return 0;
}