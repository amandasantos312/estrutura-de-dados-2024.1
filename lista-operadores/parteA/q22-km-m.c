// Leia um valor em km, calcule e escreva o equivalente em m.
#include <stdio.h>

int main() {
    float km, m;

    printf("Valor para Km: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("\nCorresponde a %.1fm", m);

    return 0;
}