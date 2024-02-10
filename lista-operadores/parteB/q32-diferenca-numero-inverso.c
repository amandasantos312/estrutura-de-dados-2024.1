//Leia um número inteiro (3 dígitos), calcule e escreva a diferença entre o número e seu inverso.
#include <stdio.h>

int main() {
    int num, c, d, u, inverso, diferenca;

    printf("Numero de 3 digitos: ");
    scanf("%d", &num);

    c = num / 100;
    d = (num % 100) / 10;
    u = num % 10;

    inverso = (u*100) + (d*10) + (c*1);
    diferenca = num - inverso;

    printf("\nInverso: %d", inverso);
    printf("\nDiferenca: %d", diferenca);

    return 0;
}