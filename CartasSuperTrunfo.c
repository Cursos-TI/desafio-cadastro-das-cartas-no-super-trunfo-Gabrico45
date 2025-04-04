#include <stdio.h>

int main() {
    char codigo[4]; // Código da carta (ex: A01)
    int populacao;  // População da cidade
    float area;     // Área da cidade
    double pib;     // PIB da cidade
    int pontosTuristicos; // Número de pontos turísticos
    char continuar = 's'; // Controle para cadastrar outra carta

    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n");
    printf("Cadastro de cartas com informações das cidades.\n");

    do {
        // Solicitar o código da carta ao usuário
        printf("\nDigite o código da carta (exemplo: A01): ");
        scanf("%s", codigo);

        // Entrada de dados
        printf("Digite a população da cidade: ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%lf", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos);

        // Exibição das informações cadastradas
        printf("\n--- Carta cadastrada: %s ---\n", codigo);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões\n", pib);
        printf("Pontos turísticos: %d\n", pontosTuristicos);

        // Perguntar se deseja cadastrar outra carta
        printf("\nDeseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');
    

    printf("\nCadastro concluído! Obrigado por usar o sistema.\n");

    return 0;
}    