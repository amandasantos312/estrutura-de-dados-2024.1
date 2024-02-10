// Leia um número inteiro (4 dígitos binários), calcule e escreva o equivalente na base decimal.
#include <stdio.h>

int main() {
    int num1, num2, num3, num4, decimal;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("Num3: ");
    scanf("%d", &num3);

    printf("Num4: ");
    scanf("%d", &num4);

    decimal = (num1 * 8 + num2 * 4 + num3 * 2 + num4 * 1);

    printf("\nCorresponde a %d em decimal", decimal);

    return 0;
}