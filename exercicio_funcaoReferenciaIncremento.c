/*Desenvolva um programa para testar a função a seguir:
Uma função que recebe dois números a e b e, em seguida, decrementa o primeiro e incrementa o segundo. */

#include <stdio.h>

void atualizaNumero (int *a, int *b) {
	*a -= 1;
	*b += 1;
}

int main() {
	int a, b;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &b);
	
	printf("Numero 1 = %d. Numero 2 = %d", a, b);
	
	atualizaNumero(&a, &b);
	
	printf("\nAgora o Numero 1 = %d e o Numero 2: %d", a, b);
}
