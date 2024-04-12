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
void atribuiAleatorioVetor(Circulo *c);

//Funções:
void mostraCirculo(Circulo *c) {
    printf("\n----> Valores do Circulo: <----");
    printf("\nCentro: (%d, %d)", c->p.x, c->p.y);
    printf("\nRaio: %d", c->raio);
}

void atribuiAleatorio(Circulo *c) {
    c->p.x = rand() % 100;
    c->p.y = rand() % 100;
    c->raio = rand() % 100;
}

void atribuiAleatorioVetor(Circulo *c) {
    
}