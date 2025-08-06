#include <stdio.h>

int main(){
    // Dados da Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    char estado1, cidade1[50], codigo1[4];

    // Dados da Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2 ;
    char estado2, cidade2[50], codigo2[4];


    //Entrada das Informações da CARTA 1
    printf("Digite as informações da Carta 1\n");
    
    printf("Digite o ESTADO (entre 'A' e 'H') da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o CÓDIGO da Carta 1 (letra do estado + número): ");
    scanf("%s", codigo1);

    printf("Digite a CIDADE da Carta 1: ");
    scanf(" %[^\n]", cidade1); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a ÁREA (km²) da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de PONTOS TURÍSTICOS da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    
    // Entrada das Informações da CARTA 2
    printf("\n\nDigite as informações da Carta 2\n");
    
    printf("Digite o ESTADO (entre 'A' e 'H') da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o CÓDIGO da Carta 2 (letra do estado + número): ");
    scanf("%s", codigo2);

    printf("Digite a CIDADE da Carta 2: ");
    scanf(" %[^\n]", cidade2); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a ÁREA (km²) da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de PONTOS TURÍSTICOS da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional & PIB per capita da CARTA 1
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) (pib1 * 1000000000.0) / populacao1;


    // Cálculo da Densidade Populacional & PIB per capita da CARTA 2
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000.0) / populacao2;

    // Cálculo do Super Poder da Carta 1
    superPoder1 = (float) populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidadePopulacional1) + pontosTuristicos1;

    // Cálculo do Super Poder da Carta 2
    superPoder2 = (float) populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidadePopulacional2) + pontosTuristicos2;


    // Exibição de Dados
    printf("\n\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional1, pibPerCapita1);
    printf("\nSuper Poder: %.2f", superPoder1);
    
    printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional2, pibPerCapita2);
    printf("\nSuper Poder: %.2f", superPoder2);

    // Comparação entre as duas cartas
    printf("\n\nComparação de Cartas:");
    
    if (populacao1 > populacao2){
        printf("\nPopulação: Carta 1 venceu!");
    } else if (populacao1 < populacao2) {
        printf("\nPopulação: Carta 2 venceu!");
    } else {
        printf("\nPopulação: Carta 1 e Carta 2 empataram!");
    }

    if (area1 > area2){
        printf("\nÁrea: Carta 1 venceu!");
    } else if (area1 < area2) {
        printf("\nÁrea: Carta 2 venceu!");
    } else {
        printf("\nÁrea: Carta 1 e Carta 2 empataram!");
    }

    if (pib1 > pib2){
        printf("\nPIB: Carta 1 venceu!");
    } else if (pib1 < pib2) {
        printf("\nPIB: Carta 2 venceu!");
    } else {
        printf("\nPIB: Carta 1 e Carta 2 empataram!");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("\nPontos Turísticos: Carta 1 venceu!");
    } else if (area1 < area2) {
        printf("\nPontos Turísticos: Carta 2 venceu!");
    } else {
        printf("\nPontos Turísticos: Carta 1 e Carta 2 empataram!");
    }

    if (densidadePopulacional1 < densidadePopulacional2){
        printf("\nDensidade Populacional: Carta 1 venceu! (pois tem menor densidade)");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf("\nDensidade Populacional: Carta 2 venceu! (pois tem menor densidade)");
    } else {
        printf("\nDensidade Populacional: Carta 1 e Carta 2 empataram!");
    }

    if (pibPerCapita1 > pibPerCapita2){
        printf("\nPIB per Capita: Carta 1 venceu!");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("\nPIB per Capita: Carta 2 venceu!");
    } else {
        printf("\nPIB per Capita: Carta 1 e Carta 2 empataram!");
    }

    if (superPoder1 > superPoder2){
        printf("\nSuper Poder: Carta 1 venceu!");
    } else if (superPoder1 < superPoder2) {
        printf("\nSuper Poder: Carta 2 venceu!");
    } else {
        printf("\nSuper Poder: Carta 1 e Carta 2 empataram!");
    }
    
    return 0;
}
