#include <stdio.h>

int main(){
    int finobacci[3] = {1, 0, 0};
    
    for(int i = 1 ;i < 21; i++){
        finobacci[2] = finobacci[1] + finobacci[0];  
        finobacci[0] = finobacci[1];
        finobacci[1] = finobacci[2];

        printf("%d, ", finobacci[2]);
    }

    return 0;
}