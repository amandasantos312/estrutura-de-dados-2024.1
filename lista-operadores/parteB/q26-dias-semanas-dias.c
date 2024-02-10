//Leia um número inteiro de dias, calcule e escreva quantas semanas e quantos dias ele corresponde.
#include <stdio.h>

int main() {
    int dias, semanas, d;

    printf("Dias: ");
    scanf("%d", &dias);

    semanas = dias / 7;
    d = dias % 7;

    printf("\n%d semanas e %d dias", semanas, d);

    return 0;
}