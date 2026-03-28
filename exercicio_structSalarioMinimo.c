/*Crie uma estrutura que receba os seguintes dados de um cliente: código para identificação, seu nome e sua renda.
Crie uma função para imprimir as informações do cliente e crie outra função que retorne o valor de quantos salarios minimos o cliente ganha.
*/
#include <stdio.h>
#define SM 1621
#include <string.h>

struct cliente {
		int codigo;
		char nome[100];
		float renda;
}; 

void imprime(struct cliente cli) {
	printf("\nCliente de codigo %d com nome %s tem a renda de %.2f", cli.codigo, cli.nome, cli.renda);
}

float calculaSalario(float renda) {
		return renda / SM;
}
int main() {
	struct cliente cli;
	int quantidade;
	
	printf("Informe o codigo do cliente: ");
	scanf("%d", &cli.codigo);
	
	printf("\nInforme o nome do cliente: ");
	fflush(stdin);
	gets(cli.nome);
	
	printf("\nInforme a renda do cliente: ");
	scanf("%f", &cli.renda);
	
	imprime(cli);
	printf("\nA renda do cliente equivale a %.2f salarios minimos", calculaSalario(cli.renda));
}
