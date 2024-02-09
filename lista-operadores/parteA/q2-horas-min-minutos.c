//Leia um valor em horas e um valor em minutos, calcule e escreva o equivalente em minutos.
#include <stdio.h>

int main() {
    int horas, minutos;

    printf("Valor para horas: ");
    scanf("%d", &horas);

    printf("Valor para minutos: ");
    scanf("%d", &minutos);

    int min = (horas * 60) + minutos;

    printf("\n%d horas e %d min corresponde a um total de %d min", horas, minutos, min);

    return 0;
}