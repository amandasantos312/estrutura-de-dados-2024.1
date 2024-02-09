//Leia um valor em minutos, calcule e escreva o equivalente em horas e minutos.
#include <stdio.h>

int main() {
    int minutos;

    printf("Valor para minutos: ");
    scanf("%d", &minutos);

    int horas = minutos / 60;
    int min = minutos % 60;

    printf("\n%d minutos corresponde a %d hora(s) e %d min.", minutos, horas, min);

    return 0;
}