//Faça um programa por meio de funções que leia uma letra e imprima se a letra é uma vogal.

#include <stdio.h>
#include <ctype.h>

void conferirCaracter (char caracter) {
	if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
		printf("A letra e uma vogal.");
	else
		printf("A letra e uma consoante.");
}

int main () {
	char caracter, minuscula;
	
	printf("Digite uma letra: ");
	scanf("%c", &caracter);
	minuscula = tolower(caracter);
	
	conferirCaracter(minuscula);
}
