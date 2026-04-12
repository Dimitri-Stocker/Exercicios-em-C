/*Faça uma função que receba dois vetores de inteiros de mesmo tamanho.
Retorne o produto escalar entre eles (soma das multiplicações dos elementos correspondentes).
Ex: [1, 2, 3] e [4, 5, 6] -> 1 * 4 + 2 * 5 + 3 * 6 = 32
*/

#include <stdio.h>
#define tf 3

int calcularEscalar(int vetor1[], int vetor2[]) {
	int i, soma = 0;
	
	for (i = 0; i < tf; i++) {
		soma += vetor1[i] * vetor2[i];
	}
	return soma;
}

int main() {
	int vetor1[tf], vetor2[tf], i;
	
	printf("Preenchendo o primeiro vetor: ");
	for (i = 0; i < tf; i++) {
		printf("\nDigite um numero: ");
		scanf("%d", &vetor1[i]);
	}
	
	printf("Preenchendo o segundo vetor: ");
	for (i = 0; i < tf; i++) {
		printf("\nDigite um numero: ");
		scanf("%d", &vetor2[i]);
	}
	
	printf("Vetor 1: ");
	for (i = 0; i < tf; i++) {
		printf("[%d]", vetor1[i]);
	}
	
	printf("Vetor 2: ");
	for (i = 0; i < tf; i++) {
		printf("[%d]", vetor2[i]);
	}
	
	printf("O produto escalar e: %d", calcularEscalar(vetor1, vetor2));
}
