#include <stdio.h>

int main() {
 
    // Declaração de endereços
    int Populacao, Populacao2, pontos, pontos2;
    char Estado, Estado2;
    char carta[5], carta2[6];
    char cidade[16], cidade2[15];
    float area, area2, pib, pib2;

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
        scanf("%d", &Populacao);

        //imprime a aréa em km2 da cidade escolhida 01.
        printf ("Qual a aréa em km2 da cidade escolhida?: \n");
        scanf("%f", &area);

        //imprime o valor do PIB da cidade escolhida 01.
        printf ("Qual o valor do PIB da cidade escolhida?: \n");
        scanf("%f", &pib);

        //imprime a quantidade de pontos turísticos da cidade escolhida 01.
        printf ("Quantos pontos turísticos existem na cidade escolhida?: \n");
        scanf("%d", &pontos); 
    

       //imprime na tela o número da carta 01.
        printf ("Carta 1: \n");
        printf("Estado 1: %c \n", Estado);
        printf("Código 1: %s \n", carta);
        printf("Nome da cidade 1: %s \n", cidade);
        printf("População 1: %d \n", Populacao);
        printf("Área 1: %.2f km² \n", area);
        printf("PIB 1: %.2f bilhões de reais \n",pib);
        printf("Números de Pontos Turísticos 1: %d \n", pontos);

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
        scanf("%d", &Populacao2);

        //imprime a aréa em km2 da cidade escolhida 02.
        printf ("Qual a aréa em km2 da cidade escolhida da carta 2?: \n");
        scanf("%f", &area2);

     
        //imprime o valor do PIB da cidade escolhida 02.
        printf ("Qual o valor do PIB da cidade escolhida da carta 2?: \n");
        scanf("%f", &pib2);

        //imprime a quantidade de pontos turísticos da cidade escolhida 02.
        printf ("Quantos pontos turísticos existem na cidade escolhida da carta 2?: \n");
        scanf("%d", &pontos2);   

   //imprime na tela o número da carta 02.
        printf ("Carta 2: \n");
        printf("Estado 2: %c \n", Estado2);
        printf("Código 2: %s \n", carta2);
        printf("Nome da cidade 2: %s \n", cidade2);
        printf("População 2: %d \n", Populacao2);
        printf("Área 2: %.2f km² \n", area2);
        printf("PIB 2: %.2f bilhões de reais \n",pib2);
        printf("Números de Pontos Turísticos 2: %d \n", pontos2);

    

    return 0;
}
