//Crie uma função que troque o valor de dois números inteiros passados por referência

#include <stdio.h>

//* - quando passa por referência. altera o original.
void trocaNumero (int *n1,int *n2) {
	int aux; // guarda o valor para nao perder
	aux = *n1;	//precisa sempre do asterisco
	*n1 = *n2;
	*n2 = aux;
}

int main() {
	int num1, num2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	printf("Numero 1: %d. \nNumero 2: %d\n", num1, num2);
	
	trocaNumero(&num1, &num2);	//estou enviando o valor original. precisa do &
	
	printf("Agora o numero 1 e %d e o numero 2 e %d", num1,num2);
	
	printf("\nNovo numero 1: %d. \nNovo numero 2: %d", num1, num2);
}
