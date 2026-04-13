/*Faça uma funçao que receba dois inteiros por referência e altere ambos para o valor da média aritmética entre eles. */

#include <stdio.h>

void mediaAritmetica(int *num1, int *num2) {
	float media;
	media = (*num1 + *num2) / 2;
	*num1 = media;
	*num2 = media;
}

int main() {
	int num1, num2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	mediaAritmetica(&num1, &num2);
	
	printf("\nPrimeiro numero: %d", num1);
	printf("\nSegundo numero: %d", num2);
}

