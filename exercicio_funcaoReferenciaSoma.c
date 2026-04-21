/*Escreva uma função que receba duas variáveis do tipo inteiro por referência e retorne a soma dos valores. */

#include <stdio.h>

int somaValor (int *num1, int *num2) {
	return *num1 += *num2;
}

int main() {
	int n1, n2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &n2);
	
	printf("A soma dos valores e: %d", somaValor(&n1, &n2));
}
