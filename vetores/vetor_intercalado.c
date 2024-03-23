/*Escreva uma função que recebe dois vetores de tamanho n e um terceiro vetor de tamanho 2n.
Ao chamar a função os elementos dos vetores de tamanho n são inseridos de modo intercalado no vetor de tamanho 2n.*/
#include <stdio.h>

//protótipos:
void preencher_vetor(int n, char *vetor);
void intercalar_vetor(int n, char *v1, char *v2, char *v3);
void mostrar_vetor(int n, char *vetor);

int main() {
    int n;
    printf("\nTamanho de n: ");
    scanf("%d", &n);

    char v1[n], v2[n];

    preencher_vetor(n, v1);
    preencher_vetor(n, v2);

    char v3[2*n];
    intercalar_vetor(n, v1, v2, v3);
    mostrar_vetor(2 * n, v3);
    
    return 0;
}

void preencher_vetor(int n, char *vetor) {
    printf("\nVamos receber %d elementos\n", n);

    for (int i = 0; i < n; i++) {
        printf("> %d: ", i+1);
        scanf("%s", &vetor[i]); //%s para receber quando é char
    }
    printf("Vetor Preenchido!\n");
}

void intercalar_vetor(int n, char *v1, char *v2, char *v3) {
    int i = 0;
    int j = 0;

    for (int k = 0; k < 2*n; k++) {
        if (k % 2 != 0) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
    }
}

void mostrar_vetor(int n, char *vetor) {
    printf("\nMostrando vetor de %d elementos\n", n);
    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%c, ", vetor[i]); //%c para imprimir quando é char
    }

    printf("\b\b]\n");
    printf("\nVetor Exibido Com Sucesso!");
}