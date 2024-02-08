//Leia 2 números, calcule e escreva a divisão da soma pela subtração dos números lidos.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    int diferenca = num1 - num2;
    int divisao = soma / diferenca;

    printf("\nDivisao da soma pela diferenca = %d", divisao);

    return 0;
}