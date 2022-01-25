/*Diretiva de compilação para entrada e saida de dados*/
#include <stdio.h>

/*Struct*/
typedef struct data{
    int dia;
    int mes;
    int ano;
}data;
typedef struct Usuario{

int codigo;
char nome[100];
int valor; // ultimas 5 compras
data nascimento;
}Usuario;

/*Função principal*/
int main (){

    Usuario registro[99];
    char conf;
    int i=0;
    printf("deseja adicionar um novo usuario (y/n) ?\n");
    scanf(" %c",&conf);

    /*Entrada de dados*/
    while (conf!='n'){
        printf("adicione um codigo:\n");
        scanf("%d",&registro[i].codigo);
        printf("adicione um nome:\n");
        scanf (" %s",&registro[i].nome);
        fflush(stdin);
        printf("adicione o valor das ultimas compras do usuario:\n");
        scanf("%d",&registro[i].valor);
        printf("adicione dia de nascimento:\n");
        scanf("%d",&registro[i].nascimento.dia);
        printf("adicione mes de nascimento:\n");
        scanf("%d",&registro[i].nascimento.mes);
        printf("adicione ano de nascimento:\n");
        scanf("%d",&registro[i].nascimento.ano);
        printf("deseja adicionar outro usuario(y/n) ?\n");
        scanf(" %c",&conf);
        i++;
    }
    /*Saida de dados*/
    printf("deseja visualizar um usuario (y/n) ?\n");
    scanf(" %c",&conf);
    while (conf!='n'){
        int codigo=0;
        printf("digite o codigo do usuario: \n");
        scanf("%d",&codigo);
        for(i=0;i<=99;i++){
            if(codigo=registro[i].codigo){
                gets(registro[i].nome);
                fflush(stdin);
                printf( "codigo: %d\n Valor das ultimas 5 compras:%d\n",registro[i].codigo,registro[i].valor);
                printf( "data de nascimento: %d / %d / %d\n",registro[i].nascimento.dia,registro[i].nascimento.mes,registro[i].nascimento.ano);

            }
            else
            return;
        }
        /*Repetição*/
        printf("deseja ver outro usuario(y/n) ?");
        scanf("%c",&conf);
    }
    return 0;
}





