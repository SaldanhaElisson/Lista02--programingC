#include <stdio.h>

int main(){

    printf("Numeros em Hexadecimal: \n");
    for(int i = 1; i <= 256; i++){
        printf("%x, ", i);
    }

    printf("\n");
    printf("\n");
    printf("Numeros em Octal: \n");
    for(int i = 1; i <= 256; i++){
        printf("%o, ", i);
    }

    printf("\n");
    printf("Numero em binario: \n");

    for(int n= 1; n <= 256; n++){
        int r = 0;
         for(int i = 8; i >= 0; i--) {
            // Executa a operação shift right até a 
            // última posição da direita para cada bit.
            r = n  >> i;
                
            // Por meio do "e" lógico ele compara se o valor 
            // na posição mais à direita é 1 ou 0 
            // e imprime na tela até reproduzir o número binário.
            if(r & 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
          printf(", ");   
    }
    return 0;
}