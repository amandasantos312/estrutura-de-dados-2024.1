/*Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para 
decidir o numero de notas de cada valor que deve ser disponibilizado para o cliente que realizou o 
saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de menor valor 
disponíveis fossem distribuídas em número mínimo possível. Por exemplo, se a maquina só dispõe de 
notas de R$ 50, de R$ 10, de R$ 5 e de R$ 1, para uma quantia solicitada de R$ 87, o algoritmo deveria 
indicar uma nota de R$ 50, três notas de R$ 10, uma nota de R$ 5 e duas notas de R$ 1. Escreva um 
algoritmo que receba o valor da quantia solicitada e retorne a distribuição das notas de acordo com o 
critério da distribuição ótima.*/
#include <stdio.h>

int main() {
    int valor, cinquenta, dez, cinco, um;

    printf("Valor do saque: ");
    scanf("%d", &valor);

    cinquenta = valor / 50;
    dez = (valor % 50) / 10;
    cinco = (valor % 10) / 5;
    um = valor % 5;

    printf("\n%d notas de $50", cinquenta);
    printf("\n%d notas de $10", dez);
    printf("\n%d notas de $5", cinco);
    printf("\n%d notas de $1", um);

    return 0;
}