#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis das cartas
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    int vitorias1 = 0, vitorias2 = 0;
    char continuar;

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

    do {
        // Cálculo das densidades demográficas
        float densidade1 = (float)populacao1 / area1;
        float densidade2 = (float)populacao2 / area2;

        // Menu interativo
        int opcao1, opcao2;
        printf("\nEscolha o primeiro atributo para comparação:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Opção: ");
        scanf("%d", &opcao1);

        printf("\nEscolha o segundo atributo para comparação:\n");
        for (int i = 1; i <= 5; i++) {
            if (i != opcao1) {
                switch(i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Número de Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                }
            }
        }
        printf("Opção: ");
        scanf("%d", &opcao2);

        float soma1 = 0, soma2 = 0;

        printf("\n--- Comparação ---\n");
        printf("País 1: %s\n", nome1);
        printf("País 2: %s\n\n", nome2);

        for (int i = 0; i < 2; i++) {
            int atributo = (i == 0) ? opcao1 : opcao2;
            printf("Atributo %d:\n", i + 1);
            switch(atributo) {
                case 1:
                    printf("População:\n");
                    printf("%s: %lu\n", nome1, populacao1);
                    printf("%s: %lu\n", nome2, populacao2);
                    soma1 += populacao1;
                    soma2 += populacao2;
                    break;
                case 2:
                    printf("Área:\n");
                    printf("%s: %.2f km²\n", nome1, area1);
                    printf("%s: %.2f km²\n", nome2, area2);
                    soma1 += area1;
                    soma2 += area2;
                    break;
                case 3:
                    printf("PIB:\n");
                    printf("%s: %.2f bilhões\n", nome1, pib1);
                    printf("%s: %.2f bilhões\n", nome2, pib2);
                    soma1 += pib1;
                    soma2 += pib2;
                    break;
                case 4:
                    printf("Pontos Turísticos:\n");
                    printf("%s: %d\n", nome1, pontos1);
                    printf("%s: %d\n", nome2, pontos2);
                    soma1 += pontos1;
                    soma2 += pontos2;
                    break;
                case 5:
                    printf("Densidade Demográfica:\n");
                    printf("%s: %.2f hab/km²\n", nome1, densidade1);
                    printf("%s: %.2f hab/km²\n", nome2, densidade2);
                    soma1 += (densidade1 < densidade2) ? 1 : 0;
                    soma2 += (densidade2 < densidade1) ? 1 : 0;
                    break;
                default:
                    printf("Atributo inválido.\n");
            }
            printf("\n");
        }

        printf("Soma dos atributos:\n");
        printf("%s: %.2f\n", nome1, soma1);
        printf("%s: %.2f\n", nome2, soma2);

        if (soma1 > soma2) {
            printf("Resultado: %s venceu a rodada!\n", nome1);
            vitorias1++;
        } else if (soma2 > soma1) {
            printf("Resultado: %s venceu a rodada!\n", nome2);
            vitorias2++;
        } else {
            printf("Resultado: Empate!\n");
        }

        printf("\nDeseja realizar outra comparação? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nTotal de Vitórias:\n");
    printf("%s: %d\n", nome1, vitorias1);
    printf("%s: %d\n", nome2, vitorias2);

    if (vitorias1 > vitorias2)
        printf("\nVENCEDOR FINAL: %s\n", nome1);
    else if (vitorias2 > vitorias1)
        printf("\nVENCEDOR FINAL: %s\n", nome2);
    else
        printf("\nResultado Final: Empate Geral!\n");

    return 0;
}




