#include <stdio.h>

float imc(float peso, float altura);

int main() {
    float peso, altura;
    printf("Digite Peso e Altura: ");
    scanf("%f %f", &peso, &altura);

    float meu_imc = imc(peso, altura);

    printf("Seu IMC eh %.1f", meu_imc);

    return 0;
}

float imc(float peso, float altura) {
    return (peso) / (altura*altura);
}