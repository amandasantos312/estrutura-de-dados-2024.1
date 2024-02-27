#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    int contador = 1;

    while (contador <= numero) {
        printf("%d\n", contador);
        contador++;
    }
    printf("\nFim de execucao!");

    return 0;
}