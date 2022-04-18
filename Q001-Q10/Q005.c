#include <stdio.h>

int main(){
    int algumNumero[3];

    for(int i = 0; i < 3; i++){
        printf("Digite algum numero: \n");
        scanf("%d", &algumNumero[i]);
    }   

    for (int i = 0; i < 3; i++)
    {
        if(algumNumero[0] < algumNumero[i]){
            algumNumero[0] = algumNumero[i];
        }
    }

    printf("O maior numero é : %d \n", algumNumero[0]);
    
    return 0;
}