#include <stdio.h>

int main(){
    int short numeroDaSemanaa;
    
    
    while( 1 ){
        printf("Digite um numero entre 1 -7 para escolher um dia da semanda \n");
        printf("Ou digite 0 para sair do programa: \n");

        scanf("%hu", &numeroDaSemanaa);

        if(numeroDaSemanaa == 0){
            break;
        }

        switch (numeroDaSemanaa)
        {
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("segunda\n");
            break;
        case 3:
            printf("terça\n");
            break;
        case 4:
            printf("quarta\n");
            break;
        case 5:
            printf("quinta\n");
            break;
        case 6:
            printf("sexta\n");
            break;

        case 7:
            printf("sabado\n");
            break;

        default:
            printf("Dia invalido, tente novamente \n");
            break;
        }

        printf("\n");

    }


    return 0;
}
