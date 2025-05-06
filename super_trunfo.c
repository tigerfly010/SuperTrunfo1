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

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    int vitorias_carta1 = 0;
    int vitorias_carta2 = 0;
    int resultado;

    printf("\n--- Comparação de Cartas ---\n\n");

    resultado = populacao1 > populacao2;
    printf("População: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = area1 > area2;
    printf("Área: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = pib1 > pib2;
    printf("PIB: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = pontos1 > pontos2;
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    resultado = super_poder1 > super_poder2;
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado);
    vitorias_carta1 += resultado;
    vitorias_carta2 += !resultado;

    // Resultado final
    printf("\n--- Resultado Final ---\n\n");
    printf("Vitórias da Carta 1: %d\n", vitorias_carta1);
    printf("Vitórias da Carta 2: %d\n\n", vitorias_carta2);

    if (vitorias_carta1 > vitorias_carta2) {
        printf("Carta 1 é a vencedora geral!\n");
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("Carta 2 é a vencedora geral!\n\n");
    } else {
        printf("Empate!\n\n");
    }

    return 0;
}

