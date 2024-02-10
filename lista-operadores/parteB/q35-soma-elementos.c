//Leia um número inteiro (4 dígitos), calcule e escreva a soma dos elementos que o compõem. Ex.: número = 9534 ; soma = 9+5+3+4 = 21.
#include <stdio.h>

int main() {
    int num, um, c, d, u, soma;

    printf("Numero de 4 digitos: ");
    scanf("%d", &num);

    um = num / 1000;
    c = (num % 1000) / 100;
    d = (num % 100) / 10;
    u = num % 10;

    soma = um + c + d + u;

    printf("Soma: %d", soma);

    return 0;
}