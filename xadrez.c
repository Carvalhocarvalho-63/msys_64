include <stdio.h>
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

    // movimento do cavalo em L (loops aninhados)
    // cavalo: 2 casaspara baixo e uma casa para a esquerda
    // o primeiro loop (for)controla o movimento vertical(2casas para bbaixo)
    // o segundo loop (while), aninhado controla o movimento horizontal(uma casa para esquerda)

     int casasBaixo = 2 ;
     int casasEsquerda = 1;
     printf ("movimento do cavalo: \n");

     // loop externo(for)- movimento vertical

     int contadorHorizontal = 1;
     while (contadorHorizontal <= casasEsquerda) {
        printf ("Esquerda\n");
        contadorHorizontal++;
     }
      
    return 0;
}