#include <stdio.h>

void calcular_media(float n1, float n2, float n3, float *media, char *);

int main() {
    float nota1, nota2, nota3, media;
    char situacao;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calcular_media(nota1, nota2, nota3, &media, &situacao);

    printf("Media: %.2f", media);
    printf("\nSituacao: %c", situacao);

    return 0;
}

void calcular_media(float n1, float n2, float n3, float *media, char *sit) {
    *media = (n1 + n2 + n3) / 3;

    if (*media >= 7) {
        *sit = 'A';
    } else if (*media <= 4) {
        *sit = 'R';
    } else {
        *sit = 'P';
    }
}