#include <stdio.h>

int main(){
    // 16 quadrados
    // cada quadrado vai ter o dobro de trigo do quadrado anterior
    // o primeiro quadrado vai comçear com 1 grão

    int graoDeTrigo[17];
    int somaToria = 0;

    graoDeTrigo[0] = 1;

    printf("Quadrado %d: %d graõs \n", 1, graoDeTrigo[0] );

    for(int i = 1; i < 16; i++){
        graoDeTrigo[i] = graoDeTrigo[i-1] * 2;
        printf("Quadrado %d: %d graõs \n", i+1, graoDeTrigo[i] );
        somaToria += graoDeTrigo[i];

    }

    printf("Total de graõs %d \n", somaToria);
    
    return 0;
}