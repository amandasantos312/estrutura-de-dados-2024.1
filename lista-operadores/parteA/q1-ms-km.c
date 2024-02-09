//Leia uma velocidade em m/s, calcule e escreva esta velocidade em km/h. (Vkm/h = Vm/s * 3.6)
#include <stdio.h>

int main() {
    float ms, km;

    printf("Valor em m/s: ");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("\n%.1f m/s corresponde a %.1f km/h", ms, km);

    return 0;
}