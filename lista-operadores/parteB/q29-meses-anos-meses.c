//Leia um número inteiro de meses, calcule e escreva quantos anos e quantos meses ele corresponde.
#include <stdio.h>

int main() {
    int meses, anos, m;

    printf("Meses: ");
    scanf("%d", &meses);

    anos = meses / 12;
    m = meses % 12;

    printf("\n%d ano(s), %d mes(es)", anos, m);

    return 0;
}