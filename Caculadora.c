
/*Algoritmo computacional para simular
uma calculadora que soma, multiplica ou divide
dois números digitados pelo usuário*/

/*Uso da diretiva de compilação #include para adicionar
os arquivos stdio.h e locale.h. O primeiro contém
funcionalidades para entrada e saída de dados; o
segundo para configurar o idioma Português*/
#include<stdio.h>
#include<locale.h>

/*Programa principal*/
int main(){
    /*Configuração do idioma Português*/
    setlocale(LC_ALL,"Portuguese");

    /*Declaração de variáveis*/
    float numero1, numero2, resultado;
    char opcao;

    /*Apresentação do menu e leitura da opção*/
    printf("*** Calculadora ****\n\n");
    printf(" Menu \n");
    printf("[S]oma \n");
    printf("[M]ultiplicação\n");
    printf("[D]ivisão");
    scanf(" %c",&opcao);

    /*Entrada dos números*/
    printf("Entre com o primeiro número: ");
    scanf("%f",&numero1);
    printf("Entre com o segundo número: ");
    scanf("%f",&numero2);

    /*Processamento - operação de cálculo
    baseada na opção*/
    switch(opcao){
        case 'S':
            resultado = numero1 + numero2;
            printf("\n Soma: %.2f",resultado);
            break;
        case 'M':
            resultado = numero1 * numero2;
            printf("\n Multiplicação: %.2f",resultado);
            break;
        case 'D':
            resultado = numero1 / numero2;
            printf("\n Divisão: %.2f",resultado);
        break;
        default:
            printf("\n Opção inválida.");
    }

    return 0;
}