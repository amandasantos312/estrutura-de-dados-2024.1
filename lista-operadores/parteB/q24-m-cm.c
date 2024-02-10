//Leia um valor em m, calcule e escreva o equivalente em cm.
#include <stdio.h>

int main() {
    float m, cm;

    printf("Valor para M: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("\nCorresponde a %.1fcm", cm);

    return 0;
}