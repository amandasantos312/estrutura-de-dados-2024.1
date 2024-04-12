#include <stdio.h>
#include <stdlib.h>
#include "questaoUFF.h"

int main() {
    Ponto p1;

    printf("\n----> Ponto p1 <----");
    printf("\nX: ");
    scanf("%d", &p1.x);

    printf("Y: ");
    scanf("%d", &p1.y);

    Circulo c1;

    printf("\n----> Circulo c1 <----");
    printf("\nX: ");
    scanf("%d", &c1.p.x);

    printf("Y: ");
    scanf("%d", &c1.p.y);

    printf("Raio: ");
    scanf("%d", &c1.raio);

    Circulo *c2;

    c2 = (Circulo *) malloc(sizeof(Circulo));

    printf("\n----> Circulo c2 <----");
    printf("\nX: ");
    scanf("%d", &c2->p.x); //com -> pq é c2 é ponteiro

    printf("Y: ");
    scanf("%d", &c2->p.y);

    printf("Raio: ");
    scanf("%d", &c2->raio);


    mostraCirculo(&c1);
    mostraCirculo(c2);

    atribuiAleatorio(&c1);
    atribuiAleatorio(c2);

    printf("\n\nC1 Valores Aleatorios:");
    mostraCirculo(&c1);
    printf("\n\nC2 Valores Aleatorios:");
    mostraCirculo(c2);


    Circulo *c3 = &c1;

    printf("\n\n----> Circulo c3 <----");
    printf("\nX: ");
    scanf("%d", &c3->p.x);

    printf("Y: ");
    scanf("%d", &c3->p.y);

    printf("Raio: ");
    scanf("%d", &c3->raio);

    printf("\n\nC1 Apos a Alteracao:");
    mostraCirculo(&c1);

    printf("\n\nC3 Apos a Alteracao:");
    mostraCirculo(c3);

    Circulo vet[10];

    atribuiAleatorioVetor();

    free(c2);

    return 0;

}