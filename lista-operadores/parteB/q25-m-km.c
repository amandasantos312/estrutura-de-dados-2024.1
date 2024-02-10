//Leia um número inteiro de metros, calcule e escreva quantos Km e quantos metros ele corresponde.
#include <stdio.h>

int main() {
    float m, km;

    printf("Valor para M: ");
    scanf("%f", &m);

    km = m / 1000;

    printf("\nCorresponde a %.1fkm", km);

    return 0;
}