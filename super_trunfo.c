#include <stdio.h>

int main() {
    // Aviso ao usuário
    printf("*** Cadastro de Cartas - Super Trunfo de Cidades ***\n\n");
    printf("Atenção: Digite números SEM ponto como separador de milhar.\n");
    printf("Exemplo correto: 1000 | Exemplo errado: 1.000\n\n");

    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo de densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Super Poder
    float super_poder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição dos dados das cartas
    printf("\nCarta 1 - %s (%c):\n", nome1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2 - %s (%c):\n", nome2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações com if-else
    printf("\n--- Comparação de Cartas ---\n\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu!\n");
    else if (populacao2 > populacao1)
        printf("População: Carta 2 venceu!\n");
    else
        printf("População: Empate!\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu!\n");
    else if (area2 > area1)
        printf("Área: Carta 2 venceu!\n");
    else
        printf("Área: Empate!\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu!\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu!\n");
    else
        printf("PIB: Empate!\n");

    if (pontos1 > pontos2)
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    else if (pontos2 > pontos1)
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    else
        printf("Pontos Turísticos: Empate!\n");

    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu!\n");
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 venceu!\n");
    else
        printf("Densidade Populacional: Empate!\n");

    if (pib_per_capita1 > pib_per_capita2)
        printf("PIB per Capita: Carta 1 venceu!\n");
    else if (pib_per_capita2 > pib_per_capita1)
        printf("PIB per Capita: Carta 2 venceu!\n");
    else
        printf("PIB per Capita: Empate!\n");

    if (super_poder1 > super_poder2)
        printf("Super Poder: Carta 1 venceu!\n\n");
    else if (super_poder2 > super_poder1)
        printf("Super Poder: Carta 2 venceu!\n\n");
    else
        printf("Super Poder: Empate!\n\n");

    return 0;
}
