// Leia o valor do lado de um quadrado, calcule e escreva sua área. (área = lado2)
#include <stdio.h>

int main() {
    float lado;

    printf("Valor para Lado: ");
    scanf("%f", &lado);

    float area = lado*lado;

    printf("\nA area do quadrado eh igual a %.1f", area);

    return 0;
}