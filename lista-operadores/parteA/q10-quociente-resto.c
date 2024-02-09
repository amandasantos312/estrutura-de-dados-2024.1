//Leia 2 números inteiros, calcule e escreva o quociente e o resto da divisão do 1° pelo 2°.
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Num1: ");
    scanf("%d", &num1);

    printf("Num2: ");
    scanf("%d", &num2);

    int quociente = num1 / num2;
    int resto = num1 % num2;

    printf("\nQuociente = %d \nResto = %d", quociente, resto);

    return 0;
}