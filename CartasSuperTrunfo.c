#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pturisticos1, pturisticos2;
    float areakm1, areakm2, pib1, pib2;

    printf("Desafio Super Trunfo \n");

    printf("------ Carta 1 ------\n"); 
    printf("\n");
    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite de 01 a 04 o codigo:\n");
    scanf("%2s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a area em Km²:\n");
    scanf("%f", &areakm1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pturisticos1);
    printf("\n");
    
    printf("------ Carta 2 ------\n");
    
    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite de 01 a 04 o codigo:\n");
    scanf("%2s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a area em Km²:\n");
    scanf("%f", &areakm2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pturisticos2);
    
    printf("------ Carta 1 ------\n");
    printf ("Codigo: %c\n", estado1);
    printf ("Codigo da carta: %c%s\n", estado1, codigo1);
    printf ("Nome da cidade: %s\n", nomeCidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f km²\n", areakm1);
    printf ("PIB: %.2f bilhões de reais\n", pib1);
    printf ("Numero de pontos turisticos: %d\n", pturisticos1);
    printf("\n");
    printf("------ Carta 2 ------\n");
    printf ("Codigo: %c\n", estado2);
    printf("Codigo da carta: %c%s\n", estado2, codigo2);
    printf ("Nome da cidade: %s\n", nomeCidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km²\n", areakm2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Numero de pontos turisticos: %d\n", pturisticos2);
    

    return 0;
}