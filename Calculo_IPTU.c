/*Algoritimo comptacional para calcular o valor financeiro do IPTU,
valores das parcelas que devem ser pagas*/

/*Uso da diretiva de compilação #include para
adicionar o arquivo stdio.h, que contém
funcionalidades para entrada e saéda de dados*/
#include<stdio.h>

/*Programas principal*/
int main(){
    float IPTU, valor_vendal, area_terreno, area_construida, desconto;
    float valor_terreno, Comprimento, largura, valor_area_contruida; 
    float IPTU_desconto, acrescimo, IPTU_acrescimo, parcela, Valor_parcela;
    char opcao;


/*Interface*/    
    printf("calculadora do IPTU \n");
    printf("Selecione o seu tipo de imovel \n");
    printf("[p] Precario \n");
    printf("[m] Medio \n");
    printf("[b] Bom \n");
    printf("[l] Luxo \n");
/*Entrada da opção*/
    scanf("%c",&opcao);


/*Valor vendal*/
    /*Valor  do terreno*/
        printf("calculadora da area do terreno \n");
        printf("\nEntre com a Comprimento: ");
        scanf("%f",&Comprimento); 
        printf("Entre com a largura: ");
        scanf("%f",&largura);

    /*Calculo*/
        area_terreno = Comprimento * largura;

        valor_terreno = area_terreno * 300;

    /*Saida de dados - valor do terreno*/
        printf("\n VAlor do terreno %.2f",valor_terreno);

    /*Valor da area contruida para p*/
        if ((opcao == 'p') || (opcao == 'P')){

            printf("\n\n Entre com a area construida: ");
            scanf("%f",&area_construida);

        valor_area_contruida = area_construida * 100;}

    /*Valor da area contruida para m*/
        if ((opcao == 'm') || (opcao == 'M')){

            printf("\n Entre com a área construída: ");
            scanf("%f",&area_construida);

        valor_area_contruida = area_construida * 300;}

    /*Valor da area contruidapara b*/
        if ((opcao == 'b') || (opcao == 'B')){

            printf("\n Entre com a área construída: ");
            scanf("%f",&area_construida);

        valor_area_contruida = area_construida * 700;}

    /*Valor da area contruida para l*/
        if ((opcao == 'l') || (opcao == 'L')){

            printf("\n Entre com a área construída: ");
            scanf("%f",&area_construida);

        valor_area_contruida = area_construida * 1200;}

/*Calculo do valor vendal*/
    valor_vendal = valor_terreno + valor_area_contruida;
    printf(" Valor vendal %.2f",valor_vendal);


/*Calculo do IPTU*/
    IPTU = 0.1 * valor_vendal;
     printf("\n\n Valor do IPTU %.2f",IPTU);


/*Parcelas*/
    printf(" \n\n indique o numero de parcelas para o pagamento: ");
    scanf("%f",&parcela);

    if (parcela <= 1 ){
         desconto = IPTU * 0.15;
         IPTU_desconto = IPTU - desconto;
         printf("\n Voce tera um desconto");
         printf("\n\n IPTU a ser pago: ");
         printf("\n Valor do IPTU %.2f",IPTU_desconto); 
    }

    if ((parcela > 1) && (parcela <= 5)){
        printf("\n IPTU a ser pago: ");
        printf("\n Valor do IPTU %.2f",IPTU);
        Valor_parcela = IPTU / parcela; 
        printf("\n Valor da parcela %.2f",Valor_parcela);
    }
    if (parcela > 5 ){ 
        acrescimo = IPTU * 0.1;
        IPTU_acrescimo = IPTU + acrescimo;
        printf("\n Voce tera um acrescimo: %.2f", IPTU_acrescimo);
        Valor_parcela = IPTU_acrescimo / parcela; 
        printf("\n valor da parcela: %.2f", Valor_parcela );
    }

    return 0;}