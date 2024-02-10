//Leia um valor em real (R$), calcule e escreva 70% deste valor.
#include <stdio.h>

int main() {
    float valor, porcentagem;

    printf("Digite um valor em real: ");
    scanf("%f", &valor);

    porcentagem = valor * 0.7;

    printf("\n70/100 de $%.2f corresponde a $%.2f", valor, porcentagem);

    return 0;
}