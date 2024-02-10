//Leia o valor do raio de uma esfera, calcule e escreva seu volume. (v = (4 * p * r3) / 3) (p = 3,14)

#include <stdio.h>

int main() {
    float raio, volume;

    float pi = 3.14;

    printf("Valor para Raio: ");
    scanf("%f", &raio);

    volume = 4 * pi * (raio*raio*raio) / 3;

    printf("\nO volume da esfera eh %.1f", volume);

    return 0;
}