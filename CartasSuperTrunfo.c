#include <stdio.h>

int main (){
    
    int populacao;
    float area;
    float PIB;
    int turisticos;
    char nome[50];
    char pais[50];

    printf("Digite o nome do país:\n");
    printf("- Brasil\n");
    printf("- Japão\n");
    scanf("%s", pais);

    printf("Escolha sua população: \n");
    scanf("%d", &populacao);

    printf("Area em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &turisticos);
    
    printf("%s é o país escolhido\n", pais);
    printf("A população do %s é: %d\n", pais, populacao);
    printf("A área do %s é: %.2f km²\n", pais, area);
    printf("O PIB do %s é: %.2f\n", pais, PIB);
    printf("O número de pontos turísticos do %s é: %d\n", pais, turisticos);

    return 0;





}