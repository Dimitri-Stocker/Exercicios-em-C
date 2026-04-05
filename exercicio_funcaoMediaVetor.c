/* Crie uma função chamada media_vetor que receba um vetor de inteiros e seu tamanho como parâmetros e retorne a media de todos os elementos pares do vetor. */

#include <stdio.h>
#define tf 5

int media_vetor (int vetorInteiros[], int tamanho) {
	int i, soma = 0, cont = 0;
	
	for (i = 0; i < tamanho; i++) {
		if (vetorInteiros[i] % 2 == 0) {
			soma += vetorInteiros[i];
			cont++;
		}
	}
	return soma / cont;
}

int main() {
	int i, vetorInteiros[tf];
	
	for (i = 0;i < tf; i++) {
		printf("Numero %d: ", i+1);
		scanf("%d", &vetorInteiros[i]);
	}
	
	printf("A media dos elementos pares do vetor e: %d", media_vetor(vetorInteiros, tf));
}

