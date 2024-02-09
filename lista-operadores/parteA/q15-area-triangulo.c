//Leia o valor da base e altura de um triângulo, calcule e escreva sua área. (área=(base * altura)/2.
#include <stdio.h>

int main() {
    float base, altura;

    printf("Valor para Base: ");
    scanf("%f", &base);

    printf("Valor para Altura: ");
    scanf("%f", &altura);

    float area = (base * altura) / 2;

    printf("\nA area do triangulo eh igual a %.1f", area);

    return 0;
}