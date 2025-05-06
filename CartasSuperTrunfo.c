#include <stdio.h>

int main() {
    // variaveis para a carta 1
    char estado1;
    char codigo1[4]; 
    char nomecidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // variaveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // cadastro da carta 1
    printf("Vamos cadastrar a primeira carta! Informe os dados abaixo:");

    printf("\n\n");

    printf("Digite a primeira letra do estado (entre A e H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Cadastro da carta 2
    printf("Agora vamos cadastrar a segunda carta! Informe os dados abaixo:\n");

    printf("Digite a primeira letra do Estado (entre A e H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");
    printf("Veja o resumo das cartas cadastradas!\n");
    printf("\n");

    // Exibição dos dados da carta 1
    printf("Primeira carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n");

    // Exibição dos dados da carta 2
    printf("Segunda carta:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}