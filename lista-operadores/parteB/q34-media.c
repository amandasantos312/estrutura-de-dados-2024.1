//Leia 3 números, calcule e escreva a média dos números.
#include <stdio.h>

int main() {
    int num1, num2, num3, media;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("Num3: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("\nMedia: %d", media);

    return 0;
}