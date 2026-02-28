#include <stdio.h>
/*Movimento recursivo- torre 5 casas para direita*/

void moverTorre (int casas) { 
    //caso base

 if (casas <= 0) {
    return;
 }
 
 printf ("Direita \n");
 // chamada recursiva
 
  moverTorre (casas -1);
 } 
 /*Movimento recursivo - Rainha 8 casas para esquerda*/
 
 void moverRainha (int casas) {
  if (casas <= 0 ) {
    return;
  } 
  printf ("Esquerda \n");
  moverRainha (casas - 1); 
 }
 /*Movimento recursivo + loops Bispo - 5 casas diagonal(Cima + Direita) loop externo = vertical loop interno = horizontal*/

 void moverBispo (int casas) {
    if (casas <= 0) {
        return;
    }
    // loop externo - movimento vertical

    for (int v = 0; v < 1; v++) {
        printf ("Cima \n");

        //loop interno - movimento horizontal

        for(int h = 0; h < 1 ; h++) {
            printf ("Direita \n");
        }
    }
      moverBispo (casas - 1);
 }
  /*loops complexos - cavalo 2 casas para cima 1 casa para a direita usando break e continue*/

     void moverCavalo () {
        int casasCima = 2;
        int casasDireita = 1;
        printf("movimento do cavalo: \n");

        // loop externo - movimnto vertical

        for(int i = 0; i < casasCima; i++) {
            if(i == casasCima){
                break; //segurança lógica
            }
        printf ("Cima \n");    
        }
         //loop interno mais complexo

         for (int j = 0; j <= casasDireita; j++){
            if (j == 0) {
                continue; // pula a primeira execução
            }
            printf ("Direita \n");
            break; //executa apenas uma vez
         }
     }

     /*função principal*/

     int main () {
        printf ("movimento da Torre: \n");
        moverTorre(5);
        printf ("\n");
        printf ("movimento do Bispo: \n");
        moverBispo(5);
        printf ("\n");
        printf ("movimento da Rainha: \n");
        moverRainha (8);
        printf ("\n");
        moverCavalo ();
        return 0;
     }
