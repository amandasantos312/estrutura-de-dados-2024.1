//Leia um número inteiro de minutos, calcule e escreva quantos dias, quantas horas e quantos minutos ele corresponde.
#include <stdio.h>

int main() {
    int minutos, dias, horas, m;

    printf("Minutos: ");
    scanf("%d", &minutos);

    dias = minutos / 1440;
    horas = (minutos % 1440) / 60;
    m = minutos % 60;

    printf("%d dias, %d horas e %d min", dias, horas, m);

    return 0;
}