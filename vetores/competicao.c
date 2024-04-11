#include <stdio.h>
#include <stdlib.h>

void preencher_inscricoes(int n, int *vetor);
void preencher_notas(int n, float *vetor);
void mostrar_notas(int n, float *vetor);
int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2);

int main() {
    int n, *inscr, p1, p2, tam, *resultado;
    float *t1, *t2;

    printf("Qtd de participantes: ");
    scanf("%d", &n);

    inscr = (int *) malloc(n * sizeof(int));
    t1 = (float *) malloc(n * sizeof(float));
    t2 = (float *) malloc(n * sizeof(float));

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

    resultado = premiados(n, inscr, t1, p1, t2, p2);

    free(inscr);
    free(t1);
    free(t2);

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

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2) { 
    float *media, maior_nota = 0;
    
    media = (float *) malloc(n * sizeof(float));

    for (int i = 0; i < n; i++) {
        media[i] = (p1*t1[i] + p2*t2[i]) / (p1+p2);

        printf("\nA media do candidato %d foi %.1f", inscr[i], media[i]);

        if (media[i] > maior_nota) {
            maior_nota = media[i];
        }
    }
    printf("\n\nA maior nota foi %.1f", maior_nota);
}