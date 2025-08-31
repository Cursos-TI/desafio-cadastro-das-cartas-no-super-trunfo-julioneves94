#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, pturisticos1, pturisticos2;
    float areakm1, areakm2, pib1, pib2, dpopulacional1, dpopulacional2; 
    float pibcapita1, pibcapita2; 

    printf("Desafio Super Trunfo\n\n");

    // INSERIR DADOS CARTA 1
    printf("------ Carta 1 ------\n"); 
    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c", &estado1);

    printf("Digite de 01 a 04 o código:\n");
    scanf("%2s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em Km²:\n");
    scanf("%f", &areakm1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pturisticos1);
    printf("\n");

    // INSERIR DADOS CARTA 2
    printf("------ Carta 2 ------\n");
    printf("Digite uma letra de A a H representando o estado:\n");
    scanf(" %c", &estado2);

    printf("Digite de 01 a 04 o código:\n");
    scanf("%2s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²:\n");
    scanf("%f", &areakm2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pturisticos2);

    // CONTAS
    dpopulacional1 = populacao1 / areakm1;
    dpopulacional2 = populacao2 / areakm2;

    pibcapita1 = (pib1 * 1000000000.0) / populacao1;
    pibcapita2 = (pib2 * 1000000000.0) / populacao2;

    // LEITURA CARTA 1
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    // LEITURA CARTA 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    return 0;
}
