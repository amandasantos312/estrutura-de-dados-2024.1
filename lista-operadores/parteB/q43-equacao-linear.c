//Escreva um algoritmo que leia os coeficientes a, b, c, d, e, f, calcule e escreva os valores de x e y, onde x = ce - bf / ae - bd e y = af - cd / ae - bd.
#include <stdio.h>

int main() {
    int a, b, c , d, e, f, x, y;

    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    printf("Valor D: ");
    scanf("%d", &d);

    printf("Valor E: ");
    scanf("%d", &e);

    printf("Valor F: ");
    scanf("%d", &f);

    x = (c*e) - (b*f) / (a*e) - (b*d);
    y = (a*f) - (c*d) / (a*e) - (b*d);

    printf("\nX = %d", x);
    printf("\nY = %d", y);

    return 0;
}