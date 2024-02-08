//Leia 3 notas de um aluno e o peso de cada nota, calcule e escreva a média ponderada.
#include <stdio.h>

int main() {
    float nota1, peso1, nota2, peso2, nota3, peso3;

    printf("Nota1: ");
    scanf("%f", &nota1);

    printf("Peso1: ");
    scanf("%f", &peso1);

    printf("Nota2: ");
    scanf("%f", &nota2);

    printf("Peso2: ");
    scanf("%f", &peso2);

    printf("Nota3: ");
    scanf("%f", &nota3);

    printf("Peso3: ");
    scanf("%f", &peso3);

    float soma_pesos = peso1 + peso2 + peso3;
    float media_pond = (nota1*peso1) + (nota2*peso2) + (nota3*peso3) / soma_pesos;

    printf("Media Ponderada: %.1f", media_pond);

    return 0;
}