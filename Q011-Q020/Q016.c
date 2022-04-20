#include <stdio.h>

int main(){
    int somaDiv3 = 0;
    int somaDiv5 = 0;

    for(int i = 0; i < 101; i ++){
        // soma dos numeros divisiveis por 3
        if((i) % 3){
            somaDiv3+= i;
        } 
       
        if(!i){
            continue;
        }   

        // soma dos numeros divisiveis por 5
        if( (100 + i) % 5 ){
            somaDiv5 =+ i + 100;
        }
       
    }

    printf("soma dos numeros multiplos de 3: %d \n", somaDiv3 );
    printf("soma dos numeros multiplos de 5: %d \n", somaDiv5 );



    return 0;
}