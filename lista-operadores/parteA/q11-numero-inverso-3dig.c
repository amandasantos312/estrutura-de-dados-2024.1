//Leia um número inteiro (3 dígitos) e escreva o inverso do número. (Ex.: número = 532 ; inverso = 235).
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    int c = num / 100;
    int d = (num % 100) / 10;
    int u = num % 10;

    printf("\nO inverso de %d eh %d%d%d", num, u, d, c);

    return 0;
}