/*Exemplo de passagem de vetor como parâmetro para uma função.
Armazene números inteiros em um vetor de Tamanho Físico 5 e crie uma função para calcular a soma de todos os elementos do vetor. */

#include <stdio.h>
#define tf 5

int somaVetor(int vetor[]) {		//precisa colocar colchete, mas nao precisa passar o tamanho físico
	int soma = 0, i;
	
	for (i = 0; i < tf; i++) {
		soma += vetor[i];
	}
	return soma;
}

int main() {
	int i, vetor[tf];
	for (i = 0; i< tf; i++) {	//preencher vetor
		printf("Numero [%d]: ", i+1);
		scanf("%d", &vetor[i]);
	}	
	
	printf("\nA soma dos elementos e: %d", somaVetor(vetor));		//nao precisa colocar colchete na passagem de parametro
}
