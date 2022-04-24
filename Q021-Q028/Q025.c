#include <stdio.h>

int main(){
    float aux = 1;
    float pi = 4;
    int termos = 0;

    printf("Digite a quantidade de termos da série que voce deseja: \n");
    scanf("%d", &termos);

    for(int i = 1; i <= termos; i++){

        if(i%2){
            pi += -4/(aux += 2);
        } else{
            pi += 4/(aux += 2);
        }

        printf("PI = %.2f \n", pi);
   
    }

    return 0;
}