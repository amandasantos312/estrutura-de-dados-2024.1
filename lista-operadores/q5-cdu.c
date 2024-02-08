//Leia um número inteiro (3 dígitos), calcule e escreva a soma de seus elementos (C + D + U).
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);

    int c = num / 100;
    int d = (num % 100) / 10;
    int u = num % 10;

    int soma = c + d + u;

    printf("\nA soma dos algarismos corresponde a %d", soma);
    
    return 0;
}