#include <stdio.h>

int main() {
 
    // Declaração de endereços
    unsigned long int Populacao, Populacao2;
    int  pontos, pontos2;
    char Estado, Estado2;
    char carta[5], carta2[6];
    char cidade[16], cidade2[15];
    float area, area2, pib, pib2, densidade, percapta, densidade2, percapta2, resultadosoma1,
    resultadosoma2;

        // Código carta 01 
        //imprime na tela carta 01.
        printf ("Carta 1: \n");
   
        //imprime a Letra conrespondente a cada estado 02.    
        printf("Insira a letra de A à H representando um dos 8 Estados da carta: \n");
        scanf("%c", &Estado);

        //imprime o código da carta escolhida 01.
        printf ("Insira a letra do estado mais o código da carta de 01 à 04: \n");
        scanf("%s", &carta);

        //imprime o nome da cidade escolhida 01.
        printf ("Qual o nome da cidade escolhida?: \n");
        scanf ("%s", &cidade);

        //imprime a população da cidade escolhida 01.
        printf ("Qual a população da cidade escolhida?: \n");
        scanf("%lu", &Populacao);

        //imprime a aréa em km2 da cidade escolhida 01.
        printf ("Qual a aréa em km2 da cidade escolhida?: \n");
        scanf("%f", &area);

        //imprime o valor do PIB da cidade escolhida 01.
        printf ("Qual o valor do PIB da cidade escolhida?: \n");
        scanf("%f", &pib);

        //imprime a quantidade de pontos turísticos da cidade escolhida 01.
        printf ("Quantos pontos turísticos existem na cidade escolhida?: \n");
        scanf("%d", &pontos); 
    
        //Calcula a Densidade Populacional da carta 01.
        densidade= Populacao / area;
        //Calcula o PIB per Capita da carta 01.
        percapta = pib / Populacao;

        //imprime na tela o número da carta 01.
        printf ("Carta 1: \n");
        printf("Estado 1: %c \n", Estado);
        printf("Código 1: %s \n", carta);
        printf("Nome da cidade 1: %s \n", cidade);
        printf("População 1: %lu \n", Populacao);
        printf("Área 1: %.2f km² \n", area);
        printf("PIB 1: %.2f bilhões de reais \n",pib);
        printf("Números de Pontos Turísticos 1: %d \n", pontos);
        printf("Densidade Populacional %.2f hab/km²: \n",densidade);
        printf("PIB por per Capita: %.2f Reais: \n", percapta);

        //Calcula o super poder da carta 01.
        resultadosoma1 =  Populacao + area + pib + pontos + densidade + percapta;
        printf("o super poder é: %.3f \n\n\n", resultadosoma1);

// Código carta 02
    
        printf ("carta 02 \n");

        //imprime a Letra conrespondente a cada estado 02.    
        printf("Insira a letra de A à H representando um dos 8 Estados da carta 2: \n");
        scanf("%s", &Estado2);


        //imprime o código da carta escolhida 02.
        printf ("Insira a letra do estado mais o código da carta 2 de 01 à 04: \n");
        scanf("%s", &carta2);

    
        //imprime o nome da cidade escolhida 02.
        printf ("Qual o nome da cidade escolhida da carta 2?: \n");
        scanf ("%s", &cidade2);

        //imprime a população da cidade escolhida 02.
        printf ("Qual a população da cidade escolhida da carta 2?: \n");
        scanf("%lu", &Populacao2);

        //imprime a aréa em km2 da cidade escolhida 02.
        printf ("Qual a aréa em km2 da cidade escolhida da carta 2?: \n");
        scanf("%f", &area2);

     
        //imprime o valor do PIB da cidade escolhida 02.
        printf ("Qual o valor do PIB da cidade escolhida da carta 2?: \n");
        scanf("%f", &pib2);

        //imprime a quantidade de pontos turísticos da cidade escolhida 02.
        printf ("Quantos pontos turísticos existem na cidade escolhida da carta 2?: \n");
        scanf("%d", &pontos2);   

        //Calcula a Densidade Populacional da carta 02.
        densidade2= Populacao2 / area2;
        //Calcula o PIB per Capita da carta 02.
        percapta2 = pib2 / Populacao2;


   //imprime na tela o número da carta 02.
        printf ("Carta 2: \n");
        printf("Estado 2: %c \n", Estado2);
        printf("Código 2: %s \n", carta2);
        printf("Nome da cidade 2: %s \n", cidade2);
        printf("População 2: %lu \n", Populacao2);
        printf("Área 2: %.2f km² \n", area2);
        printf("PIB 2: %.2f bilhões de reais \n",pib2);
        printf("Números de Pontos Turísticos 2: %d \n", pontos2);
        printf("Densidade Populacional 2: %.2f hab/km²: \n",densidade2);
        printf("PIB por per Capita 2: %.2f Reais: \n", percapta2);
    
    //Calcula o super poder da carta 02.
        resultadosoma2 =  Populacao2 + area2 + pib2 + pontos2 + densidade2 + percapta2;
        printf("o super poder é: %.3f \n\n\n", resultadosoma2);

        

         //Compara os valores das cartas
        printf(" 0 a carta perde, 1 a carta vence. Densidade menor vence!\n");
        printf("Populacao 01 > 02? %d \n", Populacao > Populacao2);
        printf("Area 01 > 02? %d \n", area > area2);
        printf("PIB 01 > 02? %d \n", pib > pib2);
        printf("Pontos turisticos 01 > 02? %d \n", pontos > pontos2);
        printf("Densidade 01 > 02? %d \n", densidade > densidade2);
        printf("PerCapita 01 > 02? %d \n", percapta > percapta2);
         
    
        
    return 0;
}
