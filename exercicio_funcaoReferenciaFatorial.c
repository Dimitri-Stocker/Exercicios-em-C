/*Escreva uma função que receba dez números inteiros positivos por referência e substitua os valores pelo seu fatorial. */

#include <stdio.h>
#define TF 10

void fatorial (int vNumeros[], int tamanho) {
	int i, fatorial, j;
	
	for (i = 0; i < tamanho; i++) {
		fatorial = 1;
		
		for (j = 1; j <= vNumeros[i]; j++) {
			fatorial *= j;
		}
		vNumeros[i] = fatorial;
	}
}

int main() {
	int vNumeros[TF], i;
	for (i = 0; i < TF; i++) {
		printf("Numero %d: ", i+1);
		scanf("%d", &vNumeros[i]);
	}
	
	printf("\nVetor original: ");
	for (i = 0; i< TF; i++) {
		printf("[%d]", vNumeros[i]);
	}
	
	fatorial(vNumeros, TF);
	
	printf("\nVetor de fatoriais: ");
	for (i = 0; i< TF; i++) {
		printf("[%d]", vNumeros[i]);
	}
}
