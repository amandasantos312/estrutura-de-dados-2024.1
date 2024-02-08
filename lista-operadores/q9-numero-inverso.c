//Leia 2 números (A, B) e escreva-os em ordem inversa (B, A).
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("\nO inverso de %d%d eh %d%d", num1, num2, num2, num1);

    return 0;
}