#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));

    // Inicializando o array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Chamando a função para modificar o array
    modifyArray(arr, size);

    // Imprimindo o array modificado
    printf("Array modificado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(arr);

    return 0;
}

void modifyArray(int *arr, int size) {
    // Modificar o conteúdo do array
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Multiplica cada elemento por 2
    }
}