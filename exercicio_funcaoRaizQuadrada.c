//Faça um programa por meio de funções que leia 2 números e exiba a raiz quadrada da soma dos quadrados.

#include <stdio.h>
#include <math.h>

float calcularRaizQuadrada (float num1, float num2) {
	float soma;
	soma = pow(num1, 2) + pow(num2, 2);
	return sqrt(soma);
}

int main () {
	float n1, n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	printf("O resultado e: %.2f", calcularRaizQuadrada(n1, n2));
}
