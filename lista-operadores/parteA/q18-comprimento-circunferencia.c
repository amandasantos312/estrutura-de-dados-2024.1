//Leia o valor do raio de uma circunferência, calcule e escreva seu comprimento.(c = 2 * p * r)
#include <stdio.h>

int main() {
    float raio, comprimento;

    float pi = 3.14;

    printf("Valor para Raio: ");
    scanf("%f", &raio);

    comprimento = 2 * pi * raio;

    printf("\nComprimento da circunferencia eh igual a %.1f", comprimento);

    return 0;
}