//Sabendo que latão é constituído de 70% de cobre e 30% de zinco, escreva um algoritmo que calcule a quantidade de cada um desses componentes para se obter certa quantidade de latão (em kg), informada pelo usuário.
#include <stdio.h>

int main() {
    float latao, cobre, zinco;

    printf("Valor para latao(kg): ");
    scanf("%f", &latao);

    cobre = 0.7 * latao;
    zinco = 0.3 * latao;

    printf("\n%.1fkg de cobre", cobre);
    printf("\n%.1fkg de zinco", zinco);

    return 0;
}