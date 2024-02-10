//Leia o salário de um trabalhador e escreva seu novo salário com um aumento de 25%.
#include <stdio.h>

int main() {
    int salario, novo_salario;

    printf("Digite um salario: ");
    scanf("%d", &salario);

    novo_salario = salario + (salario * 0.25);

    printf("Novo salario sera de: %d", novo_salario);

    return 0;
}