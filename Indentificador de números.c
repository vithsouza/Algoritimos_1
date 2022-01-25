/*Diretiva de compilação para entrada e saida de dados*/
#include<stdio.h>

/*Procedimento - positivo, maior que 100, multiplo de 5*/
    void procedimentoAnalise(int numero1){
        if(numero1 > 0){
            printf("Numero é positivo");
        }
        else{
            printf("numero negativo");
        }
        if (numero1 > 100){
            printf("\nnumero maior que 100");
        }
        else{
            printf("\nnumero menor que 100");
        }
        if(numero1 % 5 == 0){
            printf("\nnumero multiplo de 5");
        }
        else{
            printf("\nnumero nao multiplo de 5");
        }
    }



/*Função - calculo fatorial*/
    float FuncaoFat(int numero1){

        /*Declarção das variaveis*/
        float fat;
        
        /*Calculo*/
        for(fat = 2; numero1 > 2; numero1 = numero1 - 1)
            fat = fat * numero1;
        
        return fat; 
    }
    
/*Programa Principal*/
    int main(){ 

        /*Declaração das variaveis*/
        float fat;
        int numero1;

        /*Entrada de dados*/
        printf("Entre com o numero que sera analisado: ");
        scanf("%d",&numero1);

        /*Chamada da função*/
        fat = FuncaoFat(numero1);

        /*Chamada do procedimento*/
        procedimentoAnalise(numero1);

        /*Saída de dados*/
        printf("\nResultado do fatorial: %.2f ",fat);

            return 0; 
        }
 