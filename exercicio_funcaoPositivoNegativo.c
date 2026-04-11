/*Faça um algoritmo que leia um valor inteiro e informe se o valor é positivo, negativo ou igual a zero.
Utilize três funções para as mensagens. */

#include <stdio.h>

void numeroNegativo() {
	printf("O numero e negativo.");
}

void numeroPositivo() {
	printf("O numero e positivo.");
}

void numeroZero() {
	printf("O numero e zero.");
}

int main() {
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if (numero < 0)
		numeroNegativo();
	else if (numero > 0)
		numeroPositivo();
	else
		numeroZero();
}
