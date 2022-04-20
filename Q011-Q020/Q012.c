#include <stdio.h>

int main(){
    int numeroQualquer;

    printf("Digite um numero qualquer \n");
    scanf("%d", &numeroQualquer);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", numeroQualquer, i, numeroQualquer * i);
    }
    
    return 0;
}