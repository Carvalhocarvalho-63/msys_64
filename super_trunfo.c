#include <stdio.h>
int main ()  {

    // carta 1

    char codigo1[10], estado1[15], cidade1[15];
    int populacao1, pontosTuristicos1;
    float area1, pib1 ;

    // carta 2

    char codigo2[10], estado2[15], cidade2[15];
    int populacao2, pontosTuristicos2;
    float area2, pib2 ; 
    
    //--- carta 1 ---
    printf("\n--- carta 1 ---\n");
    printf("codigo: ");
    scanf ("%s", codigo1);

    printf("estado: ");
    scanf ("%s", estado1);

    printf("cidade: ");
    scanf ("%s", cidade1);

    printf("populacao: ");
    scanf ("%d", &populacao1);

    printf("area: ");
    scanf ("%f", &area1);

    printf("PIB: " );
    scanf ("%f", &pib1);

    printf("pontos turisticos: ");
    scanf ("%d", &pontosTuristicos1);

    //--- carta 2 ---

    printf("\n --- carta 2 ---\n");

    printf("codigos: ");
    scanf ("%s", codigo2);

    printf("estado: ");
    scanf ("%s", estado2);

    printf("cidade: ");
    scanf ("%s", cidade2);

    printf("populacao: ");
    scanf ("%d", &populacao2);

    printf("area: ");
    scanf ("%f", &area2);

    printf("PIB: " );
    scanf ("%f", &pib2);

    printf("pontos turisticos: ");
    scanf ("%d", &pontosTuristicos2);

    // --- mostrar resultado ---

    printf("\n === cartas cadastrada ===\n");

    printf("\n[carta 1]\n");
    printf("%s - %s (%s)\n", codigo1, estado1, cidade1);

    printf("\n[carta 2]\n");
    printf ("%s - %s (%s)\n", codigo2, estado2, cidade2);

    return 0;

}