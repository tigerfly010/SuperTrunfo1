#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis das cartas
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada dos dados da Carta 1
    printf("*** Cadastro de Cartas - Super Trunfo de Países ***\n\n");
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do País: ");
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
    printf("Nome do País: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo das densidades demográficas
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    // Menu interativo
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Exibição e comparação
    printf("\n--- Comparação ---\n");
    printf("País 1: %s\n", nome1);
    printf("País 2: %s\n\n", nome2);

    switch(opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %lu habitantes\n", nome1, populacao1);
            printf("%s: %lu habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);
            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida. Por favor, escolha entre 1 e 5.\n");
    }

    return 0;
}



