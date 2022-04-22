#include <stdio.h>

int main(){
    char numeroStrin[6];

    printf("Digite um numero de 5 digitos para verificar se é um palíndromo: \n");
    scanf("%5s", numeroStrin);

    for (int i = 0; i < 5; i++)
    {
       if(!(numeroStrin[i] == numeroStrin[4-i])){
        printf("O numero %s Não é políndrome \n", numeroStrin);
        return 0;
       }
    }
    printf("O numero %s é políndrome \n", numeroStrin);
    
    return 0;
}