//Escreva um algoritmo que, tendo como dados de entrada 2 pontos quaisquer no plano, ponto1 (x1,y1) e ponto2 (x2,y2), escreva a distância entre eles, conforme fórmula.
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("X1: ");
    scanf("%f", &x1);

    printf("Y1: ");
    scanf("%f", &y1);

    printf("X2: ");
    scanf("%f", &x2);

    printf("Y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n%.1f eh a distancia entre os pontos", distancia);

    return 0;
}