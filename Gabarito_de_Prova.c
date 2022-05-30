/*Algotimo computacional para calcular a nota dos alunos*/
#include <stdio.h>


int main(){

/*Declaração das variaveis-
rp = resposta do professor
re = resposta do estudante*/

char re_1,re_2, re_3, re_4, re_5;
char rp_1,rp_2, rp_3, rp_4, rp_5;
float nota_final, nota_peso2, nota_peso1, nota_peso4;


/*Menu das questões*/
 printf("***Questão 1 ****\n\n");
    printf(" Resposta do professor\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf(" %c",&rp_1);

    printf(" Resposta do estudante\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf(" %c",&re_1);

printf("***Questão 2 ****\n\n");
    printf(" Resposta do professor\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf(" %c",&rp_2);

    printf(" Resposta do estudante\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf(" %c",&re_2);

 printf("***Questão 3 ****\n\n");
    printf(" Resposta do professor\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&rp_3);

    printf(" Resposta do estudante\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&re_3);

printf("***Questão 4 ****\n\n");
    printf(" Resposta do professor\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&rp_4);

    printf(" Resposta do estudante\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&re_4);

printf("***Questão 5 ****\n\n");
    printf(" Resposta do professor\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&rp_5);

    printf(" Resposta do estudante\n\n");
    printf("[A]  [B]  [C]  [D]  [E]\n");
    scanf("%c",&re_5);

/*verificaçao das respostas*/

nota_final = 0;
nota_peso1 = 0;
nota_peso2 = 0;
nota_peso4 = 0;

/*Questão 1 e 2*/
if ((rp_1 == re_1) && (rp_2 == re_2)){
    nota_peso2 = 4;}
    
    else if ((rp_1 == re_1) || (rp_2 == re_2)){
    nota_peso2 = 2;}
    
    else if ((rp_1 != re_1) && (rp_2 != re_2)){
    printf("Resposta 1 e 2 erradas"); 
    nota_peso2 = 0;}

/*Questão 3 e 4*/
if ((rp_3 == re_3) && (rp_4 == re_4)){
    nota_peso1 = 2;}
    
    else if ((rp_3 == re_3) || (rp_4 == re_4)){
    nota_peso1 = 1;}
    
    else if ((rp_3 != re_3) && (rp_4 != re_4)){
    printf("Respostas 3 e 4 erradas"); 
    nota_peso1 = 0;}

/*Questão 5*/
if (rp_5 == re_5){
    nota_peso4 = 4;}
    
    else  {
    printf("Resposta 5 errada");
    nota_peso4 = 0; }

nota_final = nota_peso1 + nota_peso2 + nota_peso4;

 printf("\n Nota final: %.2f",nota_final);


return 0;
    }




