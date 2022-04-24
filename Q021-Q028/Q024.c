#include <stdio.h>
#include <math.h>

int main(){
    int hipotenusa;
    int cateto1;
    int cateto2;
    
    for(int a = 0; a <= 500; a++){
        hipotenusa = a;
        // printf("%.2f\n", pow((double)hipotenusa, 2));
        for(int b = 0; b <= 500; b++){
            cateto1 = b;
            for (int c = 0; c <= 500; c++)
            {

                cateto2 = c;
                if((pow((double)hipotenusa, 2)) == (pow((double)cateto1,2) + pow((double)cateto2, 2))){
                    printf("%d² = %d² + %d² \n", hipotenusa, cateto1, cateto2);
                }
            }
            
        }
    }

   // a² = c¹/2 + b¹/2

    return 0;
}