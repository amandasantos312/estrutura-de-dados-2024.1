//Leia um número inteiro de horas, calcule e escreva quantas semanas, quantos dias e quantas horas ele corresponde.
#include <stdio.h>

int main() {
    int horas, semanas, dias, h;

    printf("Horas: ");
    scanf("%d", &horas);

    semanas = horas / 168;
    dias = (horas % 168) / 24;
    h = horas % 24;

    printf("\n%d semana(s), %d dia(s), %d hora(s)", semanas, dias, h);

    return 0;
}