#include <stdio.h>

int main() {
    float temperatura;
    printf("Temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura < 20) {
        printf("Esta Frio!\n");
    } else if (temperatura < 30) {
        printf("Esta Agradavel!\n");
    } else {
        printf("Esta Quente!\n");
    }

    return 0;
}