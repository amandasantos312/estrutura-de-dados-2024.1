#include <stdio.h>

float calcularMedia(int tam, float *vetor);

int main() {
    float v[5]; //vetor de 5 posições do tipo float

    printf("Digite 5 valores: ");
    for (int i = 0; i < 5; i++) {
        //scanf("%f", &v[i]); -> outra opção de referenciar
        scanf("%f", v + i);
    }

    //v[0] = 1000;
    //*(v + 1) = 1000;

    float m = calcularMedia(5, v);

    printf("A media eh: %.2f\n", m);
}

float calcularMedia(int tam, float *vetor) {
    float somatorio = 0.0;

    for (int i = 0; i < tam; i++) {
        //somatorio = somatorio + vetor[i]; -> outra opção
        somatorio = somatorio + *(vetor + i);
    }
    
    float media = somatorio / tam;
    return media;
}   