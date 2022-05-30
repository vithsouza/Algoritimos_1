#include<stdio.h>

typedef struct 
{
    int codigo;
    float salario;
    char  nome[61];/*Strig de 61 valores para  vetors "nome" */
    /*Data de admissao*/
    struct {
        int dia;
        int mes;
        int ano;
    }data; /*nome da struct*/

}funcionario;

/*Função principal*/
int mains(){
    /*Declaraçao das variaveis*/
    funcionario diretor[3];

    /*Entrada de dados*/
    diretor[0].codigo = 1;
    diretor[1].codigo = 2;
    diretor[2].codigo = 3;

    diretor[0].data.dia = 10;

    /*Entrada de dados do segundo diretor*/
    printf("Entre com o salario do segundo diretor");
    scanf("%f",%diretor[1].salario);

    /*processamento-alteração do salario do segundo diretor*/
diretor[1].salario =  diretor[1].salario * 2;

    return 0;
}