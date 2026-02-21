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
    printf("\n");

    //movimento do cavalo em L (loops aninhados)
    //cavalo: 2 casas para baixo e 1 casa para esquerda

     int casasBaixo = 2;
     int casasEsquerda = 1;
     printf ("movimento do cavalo: \n");

     // loop externo - > movimento vertical(Baixo)

     for ( int i = 1; i <= casasBaixo; i++) {
        printf ("Baixo \n");

        //loop interno -> movimento horizontal (Esquerda)

        for (int j = 1; j <= casasEsquerda; j++) {
            printf ("Esquerda \n");

        }
     }
      
    return 0;
}