//Fornecido o valor de um depósito e o valor da taxa de juros, calcule e exiba o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main () {
	float deposito, taxaJuros, rendimento, valorTotal;
	
	printf("Insira o valor do deposito: ");
	scanf("%f", &deposito);
	
	printf("\nInsira o valor da taxa de juros (Ex: Se for 15%%, digite 15): ");
	scanf("%f", &taxaJuros);
	
	rendimento = (deposito * taxaJuros) / 100;
	valorTotal = deposito + rendimento;
	
	printf("\nValor do rendimento: %.2f", rendimento);
	printf("\nValor total apos o rendimento: %.2f", valorTotal);
}
