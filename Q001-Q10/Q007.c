#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    printf("Digite o primeiro numero para a divisão \n");
    scanf("%d", &numero1);

    do{
        printf("Digite o segundo numero para a divisão \n");
        scanf("%d", &numero2);
    }while(!numero2);

    printf("%.2f \n", (float)numero1 / numero2);
        
    return 0;
}