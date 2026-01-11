#include <stdio.h>
int main ()  {

    // carta 1 Pernambuco

    char codigo1[10], estado1[15], cidade1[15];
    unsigned long int populacao1, pontosTuristicos1;
    float area1, pib1 ;
    float densidade1, renda1;
    float superPoder1;

    // carta 2 Paraná

    char codigo2[10], estado2[15], cidade2[15];
    unsigned long int populacao2, pontosTuristicos2;
    float area2, pib2 ; 
    float densidade2, renda2;
    float superPoder2;
    
    
     // --- entrada carta 1 
    printf ("\n --- carta 1 --- \n");
    printf("codigo: ");
    scanf ("%s", codigo1);

    printf("estado: ");
    scanf ("%s", estado1);

    printf("cidade: ");
    scanf ("%s", cidade1);

    printf("populacao: ");
    scanf ("%lu", &populacao1);

    printf("area: ");
    scanf ("%f", &area1);

    printf("pib: " );
    scanf ("%f", &pib1);

    printf("pontos turisticos: ");
    scanf ("%d", &pontosTuristicos1);

    // calculos carta 1
    densidade1 = populacao1 / area1;
    renda1   =   pib1 / populacao1;

    superPoder1 = 
    (float)populacao1 +
     area1 + 
     pib1+
     pontosTuristicos1 +
     (1 / densidade1) * 1000;

    //--- entrada carta 2 ---

    printf("\n --- carta 2 ---\n");

    printf("codigos: ");
    scanf ("%s", codigo2);

    printf("estado: ");
    scanf ("%s", estado2);

    printf("cidade: ");
    scanf ("%s", cidade2);

    printf("populacao: ");
    scanf ("%lu", &populacao2);

    printf("area: ");
    scanf ("%f", &area2);

    printf("PIB: " );
    scanf ("%f", &pib2);

    printf("pontos turisticos: ");
    scanf ("%d", &pontosTuristicos2);

    // calculos carta2
    densidade2 = populacao2 / area2;
    renda2     = pib2 / populacao2; 


    superPoder2 = 
    (float)populacao2 +
     area2 + 
     pib2+
     pontosTuristicos2 +
     (1 / densidade2) * 1000;

    // ---- saída --

    printf("\n === cartas cadastrada ===\n");

    printf("\n[carta 1]\n");
    printf("%s - %s (%s)\n", codigo1, estado1, cidade1);
    printf("densidade populacional: %.2f \n",densidade1);
    printf("renda per capita: %.2f \n", renda1);
    printf("super poder: %.2f\n", superPoder1);

    printf("\n[carta 2]\n");
    printf ("%s - %s (%s)\n", codigo2, estado2, cidade2);
    printf("densidade populacional: %.2f \n", densidade2);
    printf("renda per capita: %.2f \n", renda2);
    printf("super poder: %.2f\n", superPoder2);

    //--- comparação das cartas ---
    printf("\n === comparacao de cartas ===\n");
  
    printf("populacao: carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("area: carta 1 venceu (%d)\n", area1 > area2);
    printf("pib: carta 1 venceu (%d)\n", pib1 > pib2);
    printf("ponto turistico: carta 1 venceu (%d)\n",
           pontosTuristicos1 > pontosTuristicos2);

    // densidade: menor vence
    printf("densidade populacional: carta 1 venceu (%d)\n",
           densidade1 < densidade2);
            printf("renda per capita: carta 1 venceu (%d)\n", renda1 > renda2);
    printf("super poder: carta 1 venceu (%d)\n", superPoder1 > superPoder2);


    
    return 0;

}