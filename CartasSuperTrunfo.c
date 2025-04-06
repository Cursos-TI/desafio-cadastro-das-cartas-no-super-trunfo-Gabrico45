#include <stdio.h>

int main(){
    
    int populacao;  // População do país
    float area;  // Área do país em km²
    double PIB;   // PIB do país em bilhões
    int pontosturisticos;  // Número de pontos turísticos
    char codigo[4];  //código da carta, com limite de 4 caracteres.
    char pais[20];  // Nome do país, com limite de 20 caracteres.
    char continuar = 's'; // Vai captar se o usuario quer cadastrar outra carta ou não.
    
    do { //enquanto tiver no do e while, o programa vai rodar.
        printf("Bem vindo ao Super Trunfo! Iniciado cadastramento das cartas...\n");
        printf("\nDigite o codigo país (exemplo: A01): ");
        scanf("%s", codigo); // %s é para ler string, e o & é para ler o endereço de memoria.

        printf("Digite o nome do país: ");
        scanf("%s", pais);  

        printf("Digite a população do país : ");
        scanf("%d", &populacao);

        printf("Digite a área do país em km²: ");
        scanf("%f", &area);

        printf("Digite o PIB do país em bilhões: ");
        scanf("%lf", &PIB);

        printf("Digite o número de pontos turísticos do país: ");
        scanf("%d", &pontosturisticos);

        printf("\nCarta cadastrada!\n");

        printf("Seu Páis é: %s\n", pais);
        printf("Codigo do país: %s\n", codigo);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2lf Bilhões\n", PIB);
        printf("Pontos turísticos: %d\n", pontosturisticos);

        printf("Obrigado por cadastrar sua carta!\n");
        printf("Deseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &continuar);
    }   while (continuar == 's' || continuar == 'S'); //while enquanto o usuario disser "s" ou "S" ele vai voltar no inicio para cadastrar outra carta, se o usuario disser não "n" o programa sai do while e finaliza.
        
        printf("\nCadastro concluído! Obrigado por usar o sistema.\n"); 

    return 0;    










}
