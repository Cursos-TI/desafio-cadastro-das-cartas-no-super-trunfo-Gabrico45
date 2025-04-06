#include <stdio.h>

int main(){
    
    int populacao;  // População da cidade
    float area;  // Área da cidade em km²
    double PIB;   // PIB da cidade em bilhões
    int pontosturisticos;  // Número de pontos turísticos
    char codigo[4];  //código da carta, com limite de 4 caracteres.
    char pais[20];  // Nome do país, com limite de 20 caracteres.
    char cidade[20]; // Nome da cidade, com limite de 20 caracteres.
    char estado[20]; // Nome do estado, com limite de 20 caracteres.
    
     
    printf("Bem vindo ao Super Trunfo! Iniciado cadastramento das cartas...\n");
    printf("\nDigite o codigo país (exemplo: A01): ");
    scanf("%s", codigo); // %s é para ler string, e o & é para ler o endereço de memoria.

    printf("Digite o nome do país: ");
    scanf("%s", pais);
        
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área do da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &PIB);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos);

    printf("\n--- Carta cadastrada: %s ---\n", codigo);
    
    printf("Seu Páis é: %s\n", pais);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("A Densidade populacional é de: %.2f habitantes por km²\n", (float) populacao / area); // A densidade populacional é a população dividida pela área do país.
    printf("O PIB per capita é de: %.2lf bilhões\n", PIB / populacao); // O PIB per capita é o PIB dividido pela população da cidade.
    
    printf("\nCarta cadastrada com sucesso, ");
    printf("vamos cadastrar a segunda carta!\n");

    printf("\nDigite o codigo país (exemplo: A01): ");
    scanf("%s", codigo); // %s é para ler string, e o & é para ler o endereço de memoria.

    printf("Digite o nome do país: ");
    scanf("%s", pais);
        
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área do da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &PIB);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosturisticos);

    printf("\n--- Segunda carta cadastrada com sucesso!: %s ---\n", codigo);
    
    printf("Seu Páis é: %s\n", pais);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontosturisticos);
    printf("A Densidade populacional é de: %.2f habitantes por km²\n", (float) populacao / area); // A densidade populacional é a população dividida pela área do país.
    printf("O PIB per capita é de: %.2lf bilhões\n", PIB / populacao); // O PIB per capita é o PIB dividido pela população da cidade.
     
    printf("Cadastro concluído! Obrigado por usar o sistema.");

    return 0;    
}
