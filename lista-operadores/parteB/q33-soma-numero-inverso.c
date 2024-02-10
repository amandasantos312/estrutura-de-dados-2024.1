//Leia um número inteiro (3 dígitos), calcule e escreva a soma do número com seu inverso.(Ex.: número = 532 ; inverso = 235 ; soma = 532 + 235 = 767).
#include <stdio.h>

int main() {
    int num, c, d, u, inverso, soma;

    printf("Numero de 3 digitos: ");
    scanf("%d", &num);

    c = num / 100;
    d = (num % 100) / 10;
    u = num % 10;

    inverso = (u*100) + (d*10) + (c*1);
    soma = num + inverso;

    printf("\nInverso: %d", inverso);
    printf("\nSoma: %d", soma);

    return 0;
}