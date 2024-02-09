//Leia o valor do dólar e um valor em dólar, calcule e escreva o equivalente em real (R$).
#include <stdio.h>

int main() {
    float valor_do_dolar, valor_em_dolar;

    printf("Valor do dolar hoje: ");
    scanf("%f", &valor_do_dolar);

    printf("Valor em dolar: ");
    scanf("%f", &valor_em_dolar);

    float real = valor_do_dolar * valor_em_dolar;

    printf("\nUS$%.2f dolares corresponde a R$%.2f reais.", valor_em_dolar, real);

    return 0;
}