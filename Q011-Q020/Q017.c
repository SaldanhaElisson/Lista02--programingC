#include <stdio.h>

int main(){
    float Firehit;


    for(int i = 0; i <= 100; i +=10){
        Firehit = 1.8*i + 32;

        printf("%d °C = %.2f F \n", i, Firehit);

    }


    return 0;
}