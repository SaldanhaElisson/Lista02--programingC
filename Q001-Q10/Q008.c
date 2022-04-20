#include <stdio.h>


int main(){
    // variaveis principais
    float entrada;
    float parcelas;
    float valorDoProduto;
    
    // variaveis auxiliares
    float numeroDepoisDaVirgula;
    int auxInteiro; 
    int resto;

    // entrada do valorDoProduto
    printf("Digite o valor do produto:\n");
    scanf("%f", &valorDoProduto);

    // vai existir dois casos
    //1°caso: os valores das parcelas e entradas são iguais
    //2°caso: o valor da entrada é maior que as das parcelas e as parcelas são as maiores póssiveis

    // processamento
    while (1)
    {      

    //1° caso

       // mutiplicar por 100
        auxInteiro = (int)(valorDoProduto * 100);
       // pegar o resto da divisão poir 3
       // se for 0, os valores das entradas e das parcelas vão ser 1/3 do valor
        if(!(auxInteiro % 3)){
            entrada = valorDoProduto / 3;
            parcelas = entrada;
            break;
        }
       // depois sair do processamento
    
    // 2° caso

        //se não for
        // vai colocar o numero depois da virgula em uma variavel
        numeroDepoisDaVirgula = valorDoProduto - (int)valorDoProduto;

        // outra variavel aux  vai pegar o resto da divisão por 3
        resto = (int)valorDoProduto % 3;

        //  depois vai dividir por 3 sem o resto da divisão
        auxInteiro = valorDoProduto / 3;

        // o valor da entrada vai receber esse valor dividido por 3 + resto da divisão + nunero depois da virgula
        entrada = auxInteiro + numeroDepoisDaVirgula + resto;
        

        // valor das parcelas
        // valor das parcelas = (valor entrada - valorDoProduto) / 2
        parcelas = (valorDoProduto - entrada) / 2;
        
        // depois sair
        break;
    }
    
    printf("2X PARCELAS: %.2f \n", entrada);
    printf("ENTRADA: %.2f \n", parcelas);

    
    return 0;
}