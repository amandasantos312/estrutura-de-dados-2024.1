// Leia uma temperatura em °F, calcule e escreva a equivalente em °C. (t°C = (5 * t°F - 160) / 9)
#include <stdio.h>

int main() {
    float fahrenheit;

    printf("Valor para Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = ((5 * fahrenheit) - 160) / 9;

    printf("\nCorresponde a %1.fC", celsius);

    return 0;
}