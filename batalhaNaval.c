#include <stdio.h>

#define TAM 10   //tamanho do tabuleiro (10x10)
#define NAVIO 3  //tamanho fixos dos navios

int main() {
    // Declaração das Variáveis

    int tabuleiro[TAM] [TAM]; //matriz que representa o tabuleiro
    int navioHorizontal [NAVIO] = {3, 3, 3}; // vetor representando navio horizontal
    int navioVertical [NAVIO] = {3, 3, 3}; //vetor representando navio vertical

    //coordenadas iniciais dos navios (definidas no código)
    int linhaH = 2, colunaH = 4; // navio horizontal
    int linhaV = 5, colunaV = 1; //navio vertical

    int i, j;
    
    //inicialização do tabuleiro

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM;j++ ){
            tabuleiro [i] [j] = 0; // 0 representa água
        }
    }

    //validação do navio horizontal

    if (colunaH + NAVIO > TAM){
        printf ("erro: navio horizontal ultrapassa os limites do tabuleiro !\n");
        return 1;
    }

    // validação do navio vertical 

    if (linhaV + NAVIO > TAM) { 
        printf ("erro: navio vertrical ultrapassa os limites do tabuleiro!\n");
        return 1;
    }
   // posicionamento do navio horizontal
   for (i = 0; i < NAVIO; i++) {  
    //verifica sobreposição
    if (tabuleiro[linhaH][colunaH + i] != 0) {
    printf ("erro: sobreposição detectada no navio horizontal!\n");
    return 1;
    }
    tabuleiro [linhaH][colunaH + i] = navioHorizontal [i];
   } 
   // posicionamento do navio vertical
for (i = 0; i < NAVIO; i++) {

    if (tabuleiro[linhaV + i][colunaV] != 0) {
        printf("erro: sobreposição detectada no navio vertical!\n");
        return 1;
    }

    tabuleiro[linhaV + i][colunaV] = navioVertical[i];
}

   //exibição do tabuleiro

   printf ("\nTABULEIRO BATALHA NAVAL: \n\n");
   for (i = 0; i < TAM; i++) {
    for (j = 0; j <TAM; j++) {
        printf("%d", tabuleiro [i][j]);
    // espaço para melhor visualização
    }
    printf("\n");
   }
   return 0;
}