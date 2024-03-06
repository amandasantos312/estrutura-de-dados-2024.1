#include <stdio.h>

void inverter(int *pa, int *pb);

int main(void) {
    int a, b;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    inverter(&a, &b);
    printf("\nA: %d B: %d", a, b);
}

void inverter(int *pa, int *pb) {
    int temp = *pb; //variavel criada só para facilitar a mudança
    *pb = *pa; //b recebe a
    *pa = temp; //a recebe b
}