#include <stdio.h>

int main(){
    unsigned char x;
    unsigned char y;
    char incrimentos[9];
    int r;

    printf("Digite o primeiro valor [que será armazenado]: \n");
    scanf("%c", &x);

    printf("Digite o valor onde o primeiro valor será armazenado: \n");
    scanf("%c", &y);

    printf("%c", y);


    incrimentos[0] = y;
     // pegando os icrimentos positivo e negativo de 4 termos do segundo valor
    for(char i = 1; i <= 4; i++){
        incrimentos[i] = incrimentos[0] - i;
        incrimentos[i+4] = incrimentos[0] + i;

        printf("%c \n", incrimentos[i]);
        printf("%c \n", incrimentos[i+4]);

    }

    // descbrindo quais bits formam o 1° valor
     for(int i = 0; i <=7; i++) {
            // Executa a operação shift right até a 
            // última posição da direita para cada bit.
            r = x  >> i;
                  
            // Por meio do "e" lógico ele compara se o valor 
            // na posição mais à direita é 1 ou 0 
            // e imprime na tela até reproduzir o número binário.
            if(r & 1) {
               incrimentos[i] = incrimentos[i] | 0b0000001;

            } else {
                incrimentos[i] = incrimentos[i] & 0b11111110;
            }
        }


    // for(int n= 0; n <= 7; n++){
    //     int r = 0;
    //      for(int i = 8; i >= 0; i--) {
    //         // Executa a operação shift right até a 
    //         // última posição da direita para cada bit.
    //         r = incrimentos[n]  >> i;
                
    //         // Por meio do "e" lógico ele compara se o valor 
    //         // na posição mais à direita é 1 ou 0 
    //         // e imprime na tela até reproduzir o número binário.
    //         if(r & 1) {
    //             printf("1");
    //         } else {
    //             printf("0");
    //         }
    //     }
    //       printf(", ");   
    // }
        

    return 0;
}