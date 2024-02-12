//Leia a idade de uma pessoa expressa em dias e escreva-a expressa em anos, meses e dias.
#include <stdio.h>
#include <math.h>

int main() {
    int dias, anos, meses, d, dias_restantes;

    printf("Dias: ");
    scanf("%d", &dias);

    anos = dias / 365;
    dias_restantes = dias % 365;
    meses = dias_restantes / 30.44; //30.44 é a média de dias em um mes ao longo de um ano
    d = dias_restantes - (meses * 30.44);

    printf("Corresponde a %d anos, %d meses e %d dias.", anos, meses, d);

    return 0;
}