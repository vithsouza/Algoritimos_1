// diretivas de compilação usadas no algoritimo
#include<stdio.h>
#include<stdlib.h>

//Função para contagem de caracteres
float FuncaoLetra(char palavra[50]){

    //Declaraçao das variaveis
        int letra = 0;

    //Contador de caracteres até \0
         for (letra = 0; palavra[letra] !='\0'; letra++);
    
    //Retorno na funçao
    return letra;
    }

//Função para a analise de voagais
float FuncaoVogal(int letra){

    //Declaracao das variaveis
        int vogais;
        
        if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' 
        || letra == 'o' || letra == 'O' || letra =='u' || letra =='U'){
        vogais++;
        }
            
        return vogais;
    }
//Procedimento para ver se é a palavra aula
    void procedeAula(char palavra[50]){
        if(palavra[50] == "aula" ){
            printf("A palavra digitada e aula");
        }
        else{
            printf("\nA palavra digitada nao e aula");
        }
    }
//Função principal
int main(){

    //Declaração das variaveis
        int letra, vogais;
        char palavra[50];

    //Entrada de dados
        printf("Entre com a palavra que sera analisada: ");
    //Leitura da palavra
        scanf("%c",&palavra[50]);

    //Chamada da funcao Letra
        letra = FuncaoLetra(palavra);
    //Chamada da funcao vogais
        vogais = FuncaoVogal(letra);
    //Chamada do procedimento
       procedeAula(palavra);

    //Saida de dados para o usuario
    printf("\nA palavra possui %d  caracteres", letra);
    printf("\nA paavra tem %d vogais", vogais);

        return 0;

    }