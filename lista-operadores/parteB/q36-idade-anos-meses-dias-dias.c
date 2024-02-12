//Leia a idade de uma pessoa expressa em anos, meses e dias e escreva-a expressa apenas em dias.
#include <stdio.h>

int main() {
    int anos, meses, dias, d;

    printf("Anos: ");
    scanf("%d", &anos);

    printf("Meses: ");
    scanf("%d", &meses);

    printf("Dias: ");
    scanf("%d", &dias);

    d = anos * 365 + meses * 30 + dias;

    printf("\nSua idade corresponde a %d dias!", d);

    return 0;
}