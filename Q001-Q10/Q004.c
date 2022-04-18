#include <stdio.h>

int main(){
    

    int PEDRO;
    int JOSE;
    int ANOS = 0;
    // PEDRO EQ. = 110 + 3x
    // JOSE EQ. = 150 + 2X

    // MAIOR 110 + 3X > 150 + 2X

    while(JOSE > PEDRO ){
        ANOS ++ ;

        PEDRO = 110 + ANOS*3;
        JOSE = 150 + 2*ANOS;
    }

    printf("Em %d anos Pedro será maior que josé \n", ANOS + 1);

    return 0;
}