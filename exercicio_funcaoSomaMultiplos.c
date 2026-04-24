/*Crie uma função chamada soma_multiplos_vetor que receba um inteiro N como parâmetro.
A função deve:
Criar um vetor que armazene todos os números inteiros de 0 até N-1;
Percorrer esse vetor e identificar os números que são múltiplos de 3 ou 5;
Retornar a soma de todos esses múltiplos.
No programa principal, o usuário deve informar o valor de N, e o resultado da soma deve ser exibido na tela. */

#include <stdio.h>

int soma_multiplos_valor (int n) {
	int vNumeros[n], i, soma = 0;
	
	for (i = 0; i < n; i++) {
		vNumeros[i] = i;
		printf("[%d] ", vNumeros[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (vNumeros[i] % 3 == 0 || vNumeros[i] % 5 == 0) {
			soma += vNumeros[i];
		}
	}
	return soma;
}


int main() {
	int n;
	
	printf("Digite um numero inteiro (tamanho do vetor): ");
	scanf("%d", &n);
	
	printf("\nA soma de todos os multiplos de 3 e 5 e: %d", soma_multiplos_valor(n));
}


