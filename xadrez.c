#include <stdio.h>
int main () {
    // movimento da torre (for)
    // torre: 5 casas para direita

    int i;
    printf ("movimento da torre: \n");
    for (i = 1; i <= 5; i++) {
    printf ("direita \n");    
    }
    printf ("\n");

    // movimento do bispo (while)
    //cinco casas na diagonal
    //cima + direita

    int contador = 1;
    printf ("movimento do bispo: \n");
    while (contador <= 5) {
        printf ("cima direita \n");
        contador ++;
    }
    printf("\n");

    // movimento da rainha (do-while)
    //rainha: 8 casas para a esquerda

    int passos = 1;
    printf ("movimento da rainha:\n");
    do {
        printf ("esquerda \n");
        passos++;

    }
    while(passos <= 8);
    return 0;
}