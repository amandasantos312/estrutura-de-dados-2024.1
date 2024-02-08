//Leia 3 números, calcule e escreva a soma dos 2 primeiros e a diferença entre os 2 últimos.
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    printf("Num3: ");
    scanf("%d", &num3);

    int soma = num1 + num2;
    int diferenca = num2 - num3;

    printf("\nSoma dos dois primeiros numeros = %d \nDiferenca entre os dois ultimos = %d", soma, diferenca);

    return 0;
}