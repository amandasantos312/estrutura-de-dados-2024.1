#include <stdio.h>

int main() {
    int ano;
    char nome[10];
    float altura;

    printf("Qual seu nome: ");
    scanf("%s", nome);

    printf("Em qual ano voce nasceu: ");
    scanf("%d", &ano);

    printf("Qual sua altura: ");
    scanf("%f", &altura);

    int idade = 2024 - ano;

    printf("\n%s, em 2024 voce tera %d anos!\n", nome, idade);
    printf("A sua altura1: %.2f m\n", altura);

    return 0;
}