// Leia um valor em kg (quilograma), calcule e escreva o equivalente em g (grama).
#include <stdio.h>

int main() {
    float kg, g;

    printf("Valor para kg: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("\nCorresponde a %.1fg", g);

    return 0;
}