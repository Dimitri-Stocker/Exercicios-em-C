//Fornecido o ano de nascimento de uma pessoa e o ano atual, calcule e exibe a idade da pessoa.

#include <stdio.h>

int main() {
	int anoAtual, anoNascimento, idade;
	
	printf("Insira o ano atual: ");
	scanf("%d", &anoAtual);
	
	printf("Insira o ano de seu nascimento: ");
	scanf("%d", &anoNascimento);
	
	idade = anoAtual - anoNascimento;
	
	printf("Voce tem %d anos.", idade);
}
