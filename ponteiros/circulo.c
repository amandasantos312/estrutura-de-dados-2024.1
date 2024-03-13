#include <stdio.h>
#define PI 3.14159265
int main() {
    void calculaCirculo(float , float *, float *); //raio/area/circunferencia -> no protótipo é importante só o tipo

    float raio, area, circunferencia;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    calculaCirculo(raio, &area, &circunferencia); //passo o enderenço das varáveis

    printf("\nO Circulo de raio %.1f tem:\nArea: %.1f\nCircunferencia: %.1f", raio, area, circunferencia);

    return 0;
}

void calculaCirculo(float raio, float *area, float *circ) {
    *area = PI * raio * raio;
    *circ = 2 * PI * raio;
}