// Leia o valor da base e altura de um retângulo, calcule e escreva sua área. (área = base * altura)
#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Valor para Base: ");
    scanf("%f", &base);

    printf("Valor para Altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("\nA area do retangulo eh igual a %.1f", area);

    return 0;
}