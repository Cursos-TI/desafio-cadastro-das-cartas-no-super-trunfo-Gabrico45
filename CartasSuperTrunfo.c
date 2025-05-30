#include <stdio.h>

int main(){
    
    int opcao;

    //variaveis para a carta1
    char codigo1[4]; // Tamanho 4: 1 letra + 2 números (EX: A01)
    char pais1[20];
    char estado1[20];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontosturisticos1;
    
    //variaveis para a carta2
    char codigo2[4];
    char pais2[20];
    char estado2[20]; 
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontosturisticos2;
    
    //variaveis para os calculos
    float densidadePopulacional1, densidadePopulacional2; // A densidade populacional é a população dividida pela área da cidade.
    float pibPerCapita1, pibPerCapita2; // O PIB per capita é o PIB dividido pela população da cidade.
    float SuperPoder1, SuperPoder2;
    
    //Instruções para o usuário
    printf("Bem vindo ao Super Trunfo!\n");

    printf("\n--- Cadastro carta 1 ---\n");
    printf("Digite o codigo país (exemplo: A01): ");
    scanf(" %s", codigo1); 

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", pais1); // O espaço antes do %s é para ignorar o caractere de nova linha deixado pelo scanf anterior.
        
    printf("Digite o estado: ");
    scanf("%s", estado1);
    
    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", cidade1); // O %[^\n] é usado para ler uma string com espaços em branco.

    printf("Digite a população da cidade (milhões): ");
    scanf("%lu", &populacao1);

    printf("Digite a área do da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    printf("\n--- Cadastro carta 2 ---\n");
     
    printf("Digite o codigo país (exemplo: A01): ");
    scanf(" %s", codigo2); 

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", pais2); 
        
    printf("Digite o estado: ");
    scanf("%s", estado2);
    
    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", cidade2); 

    printf("Digite a população da cidade (milhões): ");
    scanf("%lu", &populacao2);

    printf("Digite a área do da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    printf("\n--- Cartas cadastradas com sucesso! ---\n");

    // Comparação entre as cartas
    if (populacao1 > populacao2) {
        printf("\nPopulação: Carta 1 Venceu!\n");
    } else if (populacao1 < populacao2) {
        printf("\nPopulação: Carta 2 Venceu!\n");
    } else {
        printf("\nPopulação: Empate!\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 Venceu!\n");
    } else if (area1 < area2) {
        printf("Área: Carta 2 Venceu!\n");
    } else {
        printf("Área: Empate!\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 Venceu!\n");
    } else if (pib1 < pib2) {
        printf("PIB: Carta 2 Venceu!\n");
    } else {
        printf("PIB: Empate!\n");
    }

    if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos Turísticos: Carta 1 Venceu!\n");
    } else if (pontosturisticos1 < pontosturisticos2) {
        printf("Pontos Turísticos: Carta 2 Venceu!\n");
    } else {
        printf("Pontos Turísticos: Empate!\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2) {
        printf("Densidade Populacional: Carta 1 Venceu!\n");
    } else if (densidadePopulacional1 > densidadePopulacional2) {
        printf("Densidade Populacional: Carta 2 Venceu!\n");
    } else {
        printf("Densidade Populacional: Empate!\n");
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 Venceu!\n");
    } else if (pibPerCapita1 < pibPerCapita2) {
        printf("PIB per Capita: Carta 2 Venceu!\n");
    } else {
        printf("PIB per Capita: Empate!\n");
    }

    if (SuperPoder1 > SuperPoder2) {
        printf("Super Poder: Carta 1 Venceu!\n");
    } else if (SuperPoder1 < SuperPoder2) {
        printf("Super Poder: Carta 2 Venceu!\n");
    } else {
        printf("Super Poder: Empate!\n");
    }

    printf("\nVocê quer comparar os atributos de cada carta?\n");
    printf("Digite 1 para sim ou 0 para não: ");
    scanf("%d", &opcao);

    switch (opcao) { //usei Switch para definir o que o usuário quer comparar // o switch é mais legível que o if
        case 1:
               printf("Qual atributo você quer comparar?\n");
               printf("1 - Nome dos países\n");
               printf("2 - População\n");
               printf("3 - Área\n");
               printf("4 - PIB\n");
               printf("5 - Pontos Turísticos\n");
               printf("6 - Densidade Populacional\n");
               printf("0 - Mostrar todos os atributos!\n");
               printf("Digite sua escolha: ");
               scanf("%d", &opcao);
               
               switch (opcao) {
                   case 1:
                       printf("Você escolheu comparar os nomes dos países.\n");
                       printf("Carta 1: %s\n", pais1);
                       printf("Carta 2: %s\n", pais2);
                       break;
                   case 2:
                       printf("Você escolheu comparar a população.\n");
                       printf("Carta 1: %lu milhões\n", populacao1);
                       printf("Carta 2: %lu milhões\n", populacao2);
                       break;
                   case 3:
                       printf("Você escolheu comparar a área.\n");
                       printf("Carta 1: %.2f km²\n", area1);
                       printf("Carta 2: %.2f km²\n", area2);
                       break;
                   case 4:
                       printf("Você escolheu comparar o PIB.\n");
                       printf("Carta 1: %.2f bilhões\n", pib1);
                       printf("Carta 2: %.2f bilhões\n", pib2);
                       break;
                   case 5:
                       printf("Você escolheu comparar os pontos turísticos.\n");
                       printf("Carta 1: %d pontos turísticos\n", pontosturisticos1);
                       printf("Carta 2: %d pontos turísticos\n", pontosturisticos2);
                       break;
                   case 6:
                       printf("Você escolheu comparar a densidade populacional.\n");
                       printf("Carta 1: %.2f habitantes/km²\n", densidadePopulacional1);
                       printf("Carta 2: %.2f habitantes/km²\n", densidadePopulacional2);
                       break;      
                   case 0:
                       printf("Você escolheu mostrar todos os atributos.\n");
                       printf("Carta 1:\n");
                       printf("Nome: %s\n", pais1);
                       printf("População: %lu milhões\n", populacao1);
                       printf("Área: %.2f km²\n", area1);
                       printf("PIB: %.2f bilhões\n", pib1);
                       printf("Pontos Turísticos: %d\n", pontosturisticos1);
                       printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
                       printf("\nCarta 2:\n");
                       printf("Nome: %s\n", pais2);
                       printf("População: %lu milhões\n", populacao2);
                       printf("Área: %.2f km²\n", area2);
                       printf("PIB: %.2f bilhões\n", pib2);
                       printf("Pontos Turísticos: %d\n", pontosturisticos2);
                       printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);           
                       break;          
               }
            break;
    }
         
    //calculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

    //calculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);
    return 0;    
}


