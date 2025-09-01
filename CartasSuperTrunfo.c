#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long populacao1, populacao2;
    int pturisticos1, pturisticos2;
    float areakm1, areakm2, pib1, pib2, dpopulacional1, dpopulacional2; 
    float pibcapita1, pibcapita2, superpoder1, superpoder2;

    printf("\n");

    printf("==========   Desafio Super Trunfo   ==========\n");

    printf("\n");

    // INSERIR DADOS CARTA 1
    printf("----------   Carta 1   ----------\n"); 
    printf("\n");
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
    printf("----------   Carta 2   ----------\n");
    printf("\n");
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
    dpopulacional1 = (float)populacao1 / areakm1;
    dpopulacional2 = (float)populacao2 / areakm2;
    
    pibcapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    pibcapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    superpoder1 = (float)populacao1 + areakm1 + pib1 + (float)pturisticos1 + pibcapita1 - dpopulacional1;
    superpoder2 = (float)populacao2 + areakm2 + pib2 + (float)pturisticos2 + pibcapita2 - dpopulacional2;
    

    // LEITURA CARTA 1
    printf("\nCarta 1:\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);
    printf ("Super Poder: %.2f\n", superpoder1);

    // LEITURA CARTA 2
    printf("\nCarta 2:\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dpopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
    printf ("Super Poder: %.2f\n", superpoder2);
    printf("\n");

    //COMPARACOES
    
    printf ("----------   Comparação de Cartas   ----------\n");
    printf("\n");
    printf ("População: %d venceu.\n", populacao1 > populacao2);
    printf ("Área: %d venceu.\n", areakm1 > areakm2);
    printf ("PIB: %d venceu.\n", pib1 > pib2);
    printf ("Pontos Turisticos: %d venceu.\n", pturisticos1 > pturisticos2);
    printf ("Densidade Populacional: %d venceu.\n", dpopulacional1 < dpopulacional2);
    printf ("PIB per Capita: %d venceu.\n", pibcapita1 > pibcapita2);
    printf ("Super Poder: %d venceu.\n", superpoder1 > superpoder2);

    return 0;
}
