#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
    int x;
    int y;
} Ponto;


typedef struct circulo {
    Ponto p;
    int raio;
} Circulo;


//Protótipos:
void mostraCirculo(Circulo *c);
void atribuiAleatorio(Circulo *c);
void atribuiAleatorioVetor(Circulo *c, int n);
void mostraCirculoVetor(Circulo *c, int n);

//Funções:
void mostraCirculo(Circulo *c) {
    printf("\nCentro: (%d, %d)", c->p.x, c->p.y);
    printf("\nRaio: %d", c->raio);
}

void atribuiAleatorio(Circulo *c) {
    c->p.x = rand() % 100;
    c->p.y = rand() % 100;
    c->raio = rand() % 100;
}

void atribuiAleatorioVetor(Circulo *c, int n) {
    for (int i = 0; i < n; i++) {
        c[i].p.x = rand() % 100;
        c[i].p.y = rand() % 100;
        c[i].raio = rand() % 100;
    }
}

void mostraCirculoVetor(Circulo *c, int n) {
    printf("\n------------------------------");
    for (int i = 0; i < n; i++) {
        printf("\n\nCirculo: ", i+1);
        mostraCirculo(&c[i]);
        printf("\n");
    }
}