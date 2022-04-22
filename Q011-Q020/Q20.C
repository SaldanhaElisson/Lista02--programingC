#include <stdio.h>

int main(){

int fatorial;
int auxFatorial;

    for (int i = 1; i <= 10; i++)
    {   
        // verificando se é numero primo
        if( i % 2){
             fatorial = i;
        for(int a = i - 1; a > 0; a--){
            fatorial = fatorial * a; 
        }
        printf("%d \n", fatorial);
        }
    }   
    return 0;
}