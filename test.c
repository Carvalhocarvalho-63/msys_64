#include <stdio.h>
int main()
{
    int idade, matricula;
    float altura;
    char nome[50];

    printf("digite sua idade:\n");
    scanf("%d", &idade);
    printf("digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("digite sua altura:\n");
    scanf("%f", &altura);

    getchar(); // limpa o '\n' do buffer

    printf("digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("nome:%s - matricula:%d\n", nome, matricula);
    printf("idade:%d - altura: %.2f\n", idade, altura);

    return 0;
}