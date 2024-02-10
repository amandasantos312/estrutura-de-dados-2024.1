// Leia um número inteiro de segundos, calcule e escreva quantas horas, quantos minutos e quantos segundos ele corresponde.
#include <stdio.h>

int main() {
    int segundos, horas, minutos, s;

    printf("Segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    s = segundos % 60;

    printf("\n%d hora(s), %d minutos, %d segundos", horas, minutos, s);

    return 0;
}