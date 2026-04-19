/*Implemente uma função que receba dois inteiros por referência e ajuste os valores de modo que o primeiro fique com o maior e o segundo com o menor */

#include <stdio.h>

void ajuste(int *n1, int *n2) {
	int auxiliar;
	if (*n2 > *n1) {
		auxiliar = *n1;
		*n1 = *n2;
		*n2 = auxiliar;
		
		printf("\nNovo primeiro numero: %d", *n1);
		printf("\nNovo segundo numero: %d", *n2);
	}
	
	else
		printf("O primeiro numero ja e maior que o segundo.");
}

int main() {
	int n1, n2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d", &n2);
	
	ajuste(&n1, &n2);
}
