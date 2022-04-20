#include <stdio.h>

int main(){
    float valor;
    float entrada;
    float parcela;

    scanf("%f", &valor);

    parcela = (int)valor/3;
    entrada = valor - (2*parcela);

    printf("Entrada de %.2f e duas parcelas de %.2f\n", entrada, parcela);

    return 0;
}