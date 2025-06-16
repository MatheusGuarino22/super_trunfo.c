#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Entrada de dados Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B03): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n=== Comparação de Cartas ===\n");

    int resultado;

    resultado = populacao1 > populacao2;
    if (resultado == 1) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    resultado = area1 > area2;
    if (resultado == 1) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    resultado = pib1 > pib2;
    if (resultado == 1) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    resultado = pontosTuristicos1 > pontosTuristicos2;
    if (resultado == 1) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    resultado = densidade1 < densidade2; // menor densidade vence
    if (resultado == 1) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    resultado = pibPerCapita1 > pibPerCapita2;
    if (resultado == 1) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    resultado = superPoder1 > superPoder2;
    if (resultado == 1) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
