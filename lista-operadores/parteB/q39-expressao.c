// Leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: d = (r + s)/2 onde r = (a+b)² e s = (b+c)².
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, r, s, d;

    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    r = pow((a + b), 2);
    s = pow((b + c), 2);

    d = (r + s) / 2;

    printf("\nR = %d", r);
    printf("\nS = %d", s);
    printf("\nD = %d", d);

    return 0;
}