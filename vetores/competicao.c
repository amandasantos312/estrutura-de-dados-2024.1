#include <stdio.h>
#include <stdlib.h>

//Funcionando até a parte de preencher e mostrar vetores.

void preencher_inscricoes(int n, int *vetor);
void preencher_notas(int n, float *vetor);
void mostrar_notas(int n, float *vetor);
float *calcular_media(int n, float *t1, int p1, float *t2, int p2, float *media);
int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam);

int main() {
    int n;
    printf("Qtd de participantes: ");
    scanf("%d", &n);

    int *inscr = (int *) malloc(n * sizeof(int));
    float *t1 = (float *) malloc(n * sizeof(float));
    float *t2 = (float *) malloc(n * sizeof(float));
    float *media = (float *) malloc(n * sizeof(float));

    int p1, p2;
    printf("\nPeso de P1: ");
    scanf("%d", &p1);
    printf("Peso de P2: ");
    scanf("%d", &p2);

    preencher_inscricoes(n, inscr);

    printf("\n-----> NOTAS DO TESTE 1 <-----");
    preencher_notas(n, t1);
    mostrar_notas(n, t1);

    printf("\n-----> NOTAS DO TESTE 2 <-----");
    preencher_notas(n, t2);
    mostrar_notas(n, t2);

    free(inscr);
    free(t1);
    free(t2);

    calcular_media(n, t1, t2, p1, p2, media);

    return 0;
}

void preencher_inscricoes(int n, int *vetor) {
    for (int i = 0; i < n; i++) {
        printf("\nInforme a Inscricao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void preencher_notas(int n, float *vetor){
    for (int i = 0; i < n; i++) {
        printf("\nNota %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    printf("\nVetor De Notas Preenchido!");
}

void mostrar_notas(int n, float *vetor) {
    printf("\n[");
    for (int i = 0; i < n; i++) {
        printf("%.1f, ", vetor[i]);
    }
    printf("\b\b]\n");
}

float *calcular_media(int n, float *t1, int p1, float *t2, int p2, float *media) {
    for (int i = 0; i < n; i++) {
        media[i] = (t1[i] * p1 + t2[i] * p2) / 2;
    }
}