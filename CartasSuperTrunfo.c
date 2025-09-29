#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[30];
    char codigo_carta[30];
    char nome_cidade[30];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

  // Área para entrada de dados

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    
    printf("\nDigite o estado: ");
    scanf("%7s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    

  // Área para exibição dos dados da cidade
  
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km \n", area);
    printf("PIB: %.2f milhões de reais \n", pib);
    printf("Pontos Turísticos: %d \n", numero_pontos_turisticos);

    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km \n", area);
    printf("PIB: %.2f milhões de reais \n", pib);
    printf("Pontos Turísticos: %d \n", numero_pontos_turisticos);



return 0;
} 
