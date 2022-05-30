/*Armazenar dados do gerente de uma empresa*/
#include<stdio.h>

/*struct é o registro dos dados*/
/*Criação da struct-registro 
Denominção da struct- funcionario
Inserção de uma struct dentro da struct criada inicalente*/
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
int main(){

    /*Declaração de variaveis*/
    funcionario gerente;
    funcionario diretor;
    funcionario chefe; 

    /*Entrada de dados*/
    gerente.codigo = 1;
    gerente.salario = 10000;

    /*Entrada de dados via ususario*/
    printf("Entre com o codigo do gerente");
    scanf("%d",%gerente.codigo);
    printf("Entre com o salario do gerente");
    scanf("%f",%gerente.salario);
    printf("Entre com o ano de admissao do gerente");
    scanf("%d",%gerente.data.ano);
    

    /*Processamento- dobrar salario do gerente*/
    gerente.salario = gerente.salario * 2;

    /*Processamento- verificaão se é maior que 1000 reias*/
    if(gerente.salario > 1000){
        printf("salario é maior que R$ 1000");
    }

/*Saida de dados*/
printf("\nCodigo do gerente: %d",gerente.codigo);

    return 0; 
}
