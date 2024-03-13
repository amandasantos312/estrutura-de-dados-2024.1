#include <stdio.h>

void calcular_media(float, float, float, float *, char *); //no protótipo não é obrigatório colocar o nome das variáveis, somente os tipos

int main() {
    float nota1, nota2, nota3, media;
    char situacao;

    printf("Favor digite as 3 nota(n1 n2 n3): ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calcular_media(nota1, nota2, nota3, &media, &situacao); //& indica o endereço de onde será colocado o conteúdo

    printf("Sua media eh %.2f\n", media);
    printf("Sua situacao eh %c \n", situacao);
    return 0;
}

void calcular_media(float n1, float n2, float n3, float *m, char *sit) {
    *m = (n1 + n2 + n3) / 3;

    if (*m >= 7) {
        *sit = 'A';
    } else if (*m < 4) {
        *sit = 'R';
    } else {
        *sit = 'P';
    }
}