/*Faça um algoritmo que leia um valor inteiro e apresente o dobro do valor.
Resolva este problema de duas maneiras:
1 - Faça uma função que receba o valor, faça o cálculo e retorne o valor. Após o cálculo apresente o valor na função main.
2 - Faça uma função que receba o valor como referência. Após o cálculo apresente o valor na função main.

Primeira maneira: */

#include <stdio.h>

int calculaDobro(int numero) {
	return numero *= 2;
}

int main () {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("\nO dobro do numero e: %d", calculaDobro(numero));	
}
