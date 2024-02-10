//Leia uma temperatura em °C, calcule e escreva a equivalente em °F. (t°F = (9 * t°C + 160) / 5)
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Valor para Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("\nCorresponde a %.1fF", fahrenheit);

    return 0;
}