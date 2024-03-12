//Receba dois valores e utilize a função calcular_operacoes para calcular as quatro operaçoes com esses numeros e exiba os resultados.

#include <stdio.h>

void calcular_operacoes(int n1, int n2, int*, int*, int*, float*);

int main() {
    int num1, num2, soma, dif, produto;
    float quoc;

    printf("Digite 2 numeros: ");
    scanf("%d %d", &num1, &num2);

    calcular_operacoes(num1, num2, &soma, &dif, &produto, &quoc); //& para passar o endereço

    printf("%d + %d = %d\n", num1, num2, soma);
    printf("%d - %d = %d\n", num1, num2, dif);
    printf("%d * %d = %d\n", num1, num2, produto);
    printf("%d / %d = %.2f\n", num1, num2, quoc);

    return 0;
}

void calcular_operacoes(int n1, int n2, int *adicao, int *dif, int *prod, float *quoc) {
    *adicao = n1 + n2;
    *dif = n1 - n2;
    *prod = n1 * n2;
    *quoc = (float)n1 / n2; //casting para sair em float
}