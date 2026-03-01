//Faça um programa por meio de funções que leia 2 números inteiros e exiba qual é o maior.

#include <stdio.h>

int maiorNumero (int num1, int num2) {
	if (num1 > num2)
		printf("O primeiro numero (%d) e maior que o segundo (%d)", num1, num2);
	
	else if (num2 > num1)
		printf("O segundo numero (%d) e maior que o primeiro (%d)", num2, num1);
	
	else
		printf("Os numeros sao iguais.");
}


int main () {
	int n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	maiorNumero(n1, n2);
}
