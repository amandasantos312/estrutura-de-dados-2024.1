/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor 
seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fábrica de um carro e 
escreva o custo ao consumidor.*/
#include <stdio.h>

int main() {
    float custo_fabrica, distribuidor, impostos, custo_consumidor;

    printf("Custo de Fabrica: ");
    scanf("%f", &custo_fabrica);

    distribuidor = custo_fabrica * 0.28;
    impostos = custo_fabrica * 0.45;

    custo_consumidor = custo_fabrica + distribuidor + impostos;

    printf("\nDistribuidor: %.3f", distribuidor);
    printf("\nImpostos: %.3f", impostos);
    printf("\nCusto Consumidor: %.3f", custo_consumidor);

    return 0;
}