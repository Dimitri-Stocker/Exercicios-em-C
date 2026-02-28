//Faça um programa por meio de funções que receba 2 números inteiros, calcule e exiba a multiplicação dos números lidos.

#include <stdio.h>

int multiplicarNumeros(int num1, int num2) {
	return num1 * num2;
}

int main () {
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("O resultado da multiplicacao e: %d", multiplicarNumeros(n1, n2));
}
