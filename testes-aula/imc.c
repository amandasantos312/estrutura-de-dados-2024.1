#include <stdio.h>

int main() {
    float imc;
    printf("Digite seu imc: ");
    scanf("%f", &imc);

    if (imc <= 18.5) {
        printf("Abaixo do Peso");
    } else if (imc <= 24.9) {
        printf("Peso Ideal");
    } else if (imc <= 29.9) {
        printf("Levemente Acima do Peso");
    } else if (imc <= 34.9) {
        printf("Obesidade Grau 1");
    } else if (imc <= 39.9) {
        printf("Obesidade Grau 2(severa)");
    } else {
        printf("Obesidade Grau 3(morbida)");
    }

    return 0;
}