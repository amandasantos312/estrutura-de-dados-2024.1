#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int n, char *vetor);
//void intercalar_vetor(int n, char *v1, char *v2, char *v3);
char *intercalar_vetor(int n, char *v1, char *v2);
void mostrar_vetor(int n, char *vetor);

int main() {
    int n;
    printf("Tamanho de n: ");
    scanf("%d", &n);

    char *vetor1 = (char *) malloc(n * sizeof(char)); //casting/ malloc-> quer um espaço na memoria que caiba n * tamanho de char
    //char *vetor1 = (char *) malloc(16);
    char vetor2[n];

    preencher_vetor(n, vetor1);
    mostrar_vetor(n, vetor1);
    free(vetor1); //libera o espaço na memória de vetor1
    preencher_vetor(n, vetor2);

    char *vetor3 = intercalar_vetor(n, vetor1, vetor2);
    mostrar_vetor(2*n, vetor3);

    return 0;
}

void preencher_vetor(int n, char *vetor) {
    printf("\nVamos receber %d elementos\n", n);

    for (int i = 0; i < n; i++) {
        printf("> %d: ", i + 1);
        scanf("%c", &vetor[i]);
    }
    printf("Vetor Preenchido!\n");
}

void mostrar_vetor(int n, char *vetor) {
    printf("\nMostrando vetor de %d elementos\n", n);
    printf("[");

    for (int i = 0; i < n; i++) {
        printf("%c, ", vetor[i]);
    }

    printf("\b\b]\n");
    printf("\nVetor Exibido Com Sucesso!");
}

char *intercalar_vetor(int n, char *v1, char *v2) {
    char *v3 = (char *)malloc(2 * n * sizeof(char));
    int i = 0;
    int j = 0;

    for (int k = 0; k < 2 * n; k++) {
        if (k % 2 != 0) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
    }
    return v3;
}