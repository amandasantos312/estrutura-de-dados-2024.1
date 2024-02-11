/*Calcule a quantidade de dinheiro gasto por um fumante. 
Dados de entrada: o número de anos que ele fuma, o nº de cigarros fumados por dia e o preço de uma carteira (1 carteira tem 20 cigarros).*/
#include <stdio.h>

int main() {
    int anos, num_cigarros_dia;
    float preco_carteira;

    printf("Anos: ");
    scanf("%d", &anos);

    printf("Quantos cigarros por dia: ");
    scanf("%d", &num_cigarros_dia);

    printf("Preco carteira: ");
    scanf("%f", &preco_carteira);

    int cigarros_totais = num_cigarros_dia * 365 * anos;
    int qtd_carteiras = cigarros_totais / 20;
    float gasto_total = preco_carteira * qtd_carteiras;

    printf("\nGasto total: R$%.2f", gasto_total);

    return 0;
}