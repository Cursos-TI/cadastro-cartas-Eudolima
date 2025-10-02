#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Carta 1
    char estado1[30];
    char codigo_carta1[30];
    char nome_cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    
    // Carta 2
    char estado2[30];
    char codigo_carta2[30];
    char nome_cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
   

  // Entrada Carta 1

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos1);

    // Entrada Carta 2
    
    printf("\nDigite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    
    //Cáculos
    
    float densidade1 = (float) populacao1 / area1;
    float percapita1 = (float) pib1 / populacao1;
    float densidade2 = (float) populacao2 / area2;
    float percapita2 = (float) populacao2 / area2;
 

  // Saída
  
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km \n", area1);
    printf("PIB: %.2f milhões de reais \n", pib1);
    printf("Pontos Turísticos: %d \n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/Km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km \n", area2);
    printf("PIB: %.2f milhões de reais \n", pib2);
    printf("Pontos Turísticos: %d \n", numero_pontos_turisticos2);
    printf("Densidade: %.2f hab/Km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);



return 0;
} 
