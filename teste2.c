#include <stdio.h>

int main()
{
    char codigo[05];
    char estado[15];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("digite o codigo da carta: ");
    scanf("%s", codigo);

    printf("digite o nome do estado: ");
    scanf("%s", estado);

    printf("digite o nome da cidade: ");
    scanf("%s", cidade); // permite espaço

    printf("digite a populacao: ");
    scanf("%d", &populacao);

    printf("digite a area (km2): ");
    scanf("%f", &area);

    printf("digite o pib: ");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos:");
    scanf("%d", &pontosTuristicos);

    printf("\n--- carta super trunfo ---\n");
    printf("codigo: %s\n", codigo);
    printf("estado: %s\n", estado);
    printf("cidade: %s\n", cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f km2\n", area);
    printf("pib: %.2f\n", pib);
    printf("pontos turisticos: %d\n", pontosTuristicos);

    return 0;
}