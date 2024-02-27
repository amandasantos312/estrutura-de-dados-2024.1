#include <stdio.h>

int main() {
    int limite;
    printf("Digite um Limite: ");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; i++) {
        printf("%d\n", i);
    }

    printf("\nFim de execucao!");

    return 0;
}