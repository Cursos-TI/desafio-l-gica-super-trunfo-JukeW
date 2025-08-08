#include <stdio.h>

int main(){
    // Dados da Carta 1
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1, resultado1, somaAtributos1 = 0.0f;
    char estado1, cidade1[50], codigo1[4];

    // Dados da Carta 2
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2, resultado2, somaAtributos2 = 0.0f;
    char estado2, cidade2[50], codigo2[4];

    // Input do Usuário
    int opcaoMenu1, opcaoMenu2;


    //Entrada das Informações da CARTA 1
    printf("Digite as informações da Carta 1\n");
    
    printf("Digite o ESTADO (entre 'A' e 'H') da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o CÓDIGO da Carta 1 (letra do estado + número): ");
    scanf("%3s", codigo1); // Limita a 3 caracteres

    printf("Digite a CIDADE da Carta 1: ");
    scanf(" %[^\n]", cidade1); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 1: ");
    scanf("%lu", &populacao1);

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
    scanf("%3s", codigo2); // Limita a 3 caracteres

    printf("Digite a CIDADE da Carta 2: ");
    scanf(" %[^\n]", cidade2); // lê a linha inteira, incluindo espaços

    printf("Digite a POPULAÇÃO da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a ÁREA (km²) da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de PONTOS TURÍSTICOS da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional & PIB per capita da CARTA 1
    if (area1 != 0.0f) {
        densidadePopulacional1 = (float)populacao1 / area1;
    } else {
        densidadePopulacional1 = 0.0f;
        printf("Erro: Área da Carta 1 é zero! Densidade definida como 0.\n");
    }
    
    if (populacao1 != 0) {
        pibPerCapita1 = (float)(pib1 * 1000000000.0) / populacao1;
    } else {
        pibPerCapita1 = 0.0f;
        printf("Erro: População da Carta 1 é zero! PIB per capita definido como 0.\n");
    }

    // Cálculo da Densidade Populacional & PIB per capita da CARTA 2
    if (area2 != 0.0f) {
        densidadePopulacional2 = (float)populacao2 / area2;
    } else {
        densidadePopulacional2 = 0.0f;
        printf("Erro: Área da Carta 2 é zero! Densidade definida como 0.\n");
    }

    if (populacao2 != 0) {
        pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;
    } else {
        pibPerCapita2 = 0.0f;
        printf("Erro: População da Carta 2 é zero! PIB per capita definido como 0.\n");
    }

    // Cálculo do Super Poder da Carta 1
    superPoder1 = (float)populacao1 + area1 + pib1 + pibPerCapita1 + pontosTuristicos1;
    if (densidadePopulacional1 != 0.0f) {
        superPoder1 += (1.0f / densidadePopulacional1);
    } else {
        printf("Erro: Densidade da Carta 1 é zero! Super Poder sem o inverso da densidade.\n");
    }

    // Cálculo do Super Poder da Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + pibPerCapita2 + pontosTuristicos2;
    if (densidadePopulacional2 != 0.0f) {
        superPoder2 += (1.0f / densidadePopulacional2);
    } else {
        printf("Erro: Densidade da Carta 2 é zero! Super Poder sem o inverso da densidade.\n");
    }



    // Exibição de Dados
    printf("\n\n### Carta 1 ###\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional1, pibPerCapita1);
    printf("\nSuper Poder: %.2f", superPoder1);
    
    printf("\n\n### Carta 2 ###\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais", densidadePopulacional2, pibPerCapita2);
    printf("\nSuper Poder: %.2f", superPoder2);



    // Menu Interativo para Comparação
    printf("\n\n### COMPARAÇÃO DOS ATRIBUTOS - Atributo 1 ###\n\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n\nEscolha o número do PRIMEIRO atributo que você quer comparar: ");
    scanf("%d", &opcaoMenu1);

    printf("\n\n### COMPARAÇÃO DOS ATRIBUTOS - Atributo 2 ###\n");
    if (opcaoMenu1 != 1) printf("1. População\n");
    if (opcaoMenu1 != 2) printf("2. Área\n");
    if (opcaoMenu1 != 3) printf("3. PIB\n");
    if (opcaoMenu1 != 4) printf("4. Pontos Turísticos\n");
    if (opcaoMenu1 != 5) printf("5. Densidade Populacional\n");
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro): ");
    scanf("%d", &opcaoMenu2);

    switch(opcaoMenu1){
        case 1: // População
            printf("\n\n\n### COMPARAÇÃO DA POPULAÇÃO ###\n");
            printf("Carta 1 (%s): %lu --- Carta 2 (%s): %lu", cidade1, populacao1, cidade2, populacao2);
            resultado1 = populacao1 > populacao2 ? 1 : (populacao1 < populacao2 ? 0 : 0.5);
        break;
        
        case 2: // Área
            printf("\n\n### COMPARAÇÃO DA ÁREA ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, area1, cidade2, area2);

            resultado1 = area1 < area2 ? 1 : (area1 > area2 ? 0 : 0.5);
        break;

        case 3: // PIB
            printf("\n\n### COMPARAÇÃO DO PIB ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, pib1, cidade2, pib2);

            resultado1 = pib1 < pib2 ? 1 : (pib1 > pib2 ? 0 : 0.5);
        break;        

        case 4: // Pontos Turísticos
            printf("\n\n### COMPARAÇÃO DOS PONTOS TURÍSTICOS ###\n");
            printf("Carta 1 (%s): %d --- Carta 2 (%s): %d", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);

            resultado1 = pontosTuristicos1 < pontosTuristicos2 ? 1 : (pontosTuristicos1 > pontosTuristicos2 ? 0 : 0.5);
        break;

        case 5: // Densidade Populacional
            printf("\n\n### COMPARAÇÃO DA DENSIDADE POPULACIONAL ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);

            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : (densidadePopulacional1 > densidadePopulacional2 ? 0 : 0.5);        
        break;

        default:
            printf("\n\nOpção inválida!\n");
    }



    switch(opcaoMenu2){
        case 1: // População
            printf("\n\n\n### COMPARAÇÃO DA POPULAÇÃO ###\n");
            printf("Carta 1 (%s): %lu --- Carta 2 (%s): %lu", cidade1, populacao1, cidade2, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : (populacao1 < populacao2 ? 0 : 0.5);
        break;
        
        case 2: // Área
            printf("\n\n### COMPARAÇÃO DA ÁREA ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, area1, cidade2, area2);

            resultado2 = area1 < area2 ? 1 : (area1 > area2 ? 0 : 0.5);
        break;

        case 3: // PIB
            printf("\n\n### COMPARAÇÃO DO PIB ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, pib1, cidade2, pib2);

            resultado2 = pib1 < pib2 ? 1 : (pib1 > pib2 ? 0 : 0.5);
        break;        

        case 4: // Pontos Turísticos
            printf("\n\n### COMPARAÇÃO DOS PONTOS TURÍSTICOS ###\n");
            printf("Carta 1 (%s): %d --- Carta 2 (%s): %d", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);

            resultado2 = pontosTuristicos1 < pontosTuristicos2 ? 1 : (pontosTuristicos1 > pontosTuristicos2 ? 0 : 0.5);
        break;

        case 5: // Densidade Populacional
            printf("\n\n### COMPARAÇÃO DA DENSIDADE POPULACIONAL ###\n");
            printf("Carta 1 (%s): %.2f --- Carta 2 (%s): %.2f", cidade1, densidadePopulacional1, cidade2, densidadePopulacional2);

            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : (densidadePopulacional1 > densidadePopulacional2 ? 0 : 0.5);        
        break;

        default:
            printf("\n\nOpção inválida!\n");
    }

    switch(opcaoMenu1){
        case 1:
            somaAtributos1 += populacao1; somaAtributos2 += populacao2;
        break;
        case 2:
            somaAtributos1 += area1; somaAtributos2 += area2;
        break;
        case 3:
            somaAtributos1 += pib1; somaAtributos2 += pib2;
        break;
        case 4:
            somaAtributos1 += pontosTuristicos1; somaAtributos2 += pontosTuristicos2;
        break;
        case 5:
            somaAtributos1 += densidadePopulacional1; somaAtributos2 += densidadePopulacional2;
        break;
    }

    switch(opcaoMenu2){
        case 1:
            somaAtributos1 += populacao1; somaAtributos2 += populacao2;
        break;
        case 2:
            somaAtributos1 += area1; somaAtributos2 += area2;
        break;
        case 3:
            somaAtributos1 += pib1; somaAtributos2 += pib2;
        break;
        case 4:
            somaAtributos1 += pontosTuristicos1; somaAtributos2 += pontosTuristicos2;
        break;
        case 5:
            somaAtributos1 += densidadePopulacional1; somaAtributos2 += densidadePopulacional2;
        break;
    }


    if (somaAtributos1 > somaAtributos2) {
        printf("\n\nCarta 1 (%s) venceu com soma %.2f contra %.2f!\n", cidade1, somaAtributos1, somaAtributos2);
    } else if (somaAtributos1 < somaAtributos2) {
        printf("\n\nCarta 2 (%s) venceu com soma %.2f contra %.2f!\n", cidade2, somaAtributos2, somaAtributos1);
    } else {
        printf("\n\nEmpate! Soma dos atributos: %.2f\n", somaAtributos1);
    }

    return 0;
}
