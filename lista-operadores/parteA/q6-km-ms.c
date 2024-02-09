//Leia uma velocidade em km/h, calcule e escreva esta velocidade em m/s. (Vm/s = Vkm/h / 3.6).
#include <stdio.h>

int main() {
    float km, ms;

    printf("Valor em km/h: ");
    scanf("%f", &km);

    ms = km / 3.6;

    printf("\n%.1f km/h corresponde a %.1f m/s", km, ms);

    return 0;
}