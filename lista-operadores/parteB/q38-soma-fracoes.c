//Leia 2 (duas) frações (numerador e denominador), calcule e escreva a soma destas frações, escrevendo o resultado em forma de fração.
#include <stdio.h>

int main() {
    int num1, den1, num2, den2;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Den1: ");
    scanf("%d", &den1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("Den2: ");
    scanf("%d", &den2);

    //Resultado da soma gera outra fracao:
    int den3 = den1 * den2;
    int num3 = (den3 / den1) * num1 + (den3 / den2) * num2;

    printf("\nFracao: %d/%d", num3, den3);

    return 0;
}