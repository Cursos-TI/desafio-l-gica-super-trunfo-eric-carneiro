#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[8];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da segunda carta
    char estado2[8];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Variáveis de armazenamento do resultado
    float densidade1, pibPerCapita1, superPoder1;
    float densidade2, pibPerCapita2, superPoder2;

    // Cadastramento das cartas
    // Primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite uma letra de A a H para o estado: ");
    scanf("%s", estado1);
    printf("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Densidade Populacional e PIB per Capita para a primeira cidade
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // Segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Digite uma letra de A a H para o estado: ");
    scanf("%s", estado2);
    printf("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Densidade Populacional e PIB per Capita para a segunda cidade
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Menu de escolha de atributos
    int atributo1, atributo2;

    printf("\nEscolha o primeiro atributo para comparar (1-7):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparar (1-7), diferente do primeiro:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    scanf("%d", &atributo2);

    // Verifica se o segundo atributo é o mesmo do primeiro
    if (atributo1 == atributo2) {
        printf("Erro: O segundo atributo não pode ser o mesmo que o primeiro! Tente novamente.\n");
        return 0;  // Terminamos o programa aqui, pois a escolha foi inválida
    }

    // Comparação e cálculo da soma dos atributos escolhidos
    float soma1 = 0, soma2 = 0;

    // Atributo 1
    switch (atributo1) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            soma1 += densidade1;
            soma2 += densidade2;
            break;
        case 6:
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            break;
        case 7:
            soma1 += superPoder1;
            soma2 += superPoder2;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Atributo 2
    switch (atributo2) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            soma1 += densidade1;
            soma2 += densidade2;
            break;
        case 6:
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            break;
        case 7:
            soma1 += superPoder1;
            soma2 += superPoder2;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // Exibição do resultado
    printf("\nResultado da comparação:\n");
    printf("Carta 1 - %s: Soma dos Atributos = %.2f\n", cidade1, soma1);
    printf("Carta 2 - %s: Soma dos Atributos = %.2f\n", cidade2, soma2);

    // Determinando o vencedor ou empate
    if (soma1 > soma2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (soma1 < soma2) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
