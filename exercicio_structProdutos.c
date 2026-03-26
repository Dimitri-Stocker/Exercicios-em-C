/*Crie uma struct para armazenar informações de um produto (nome, código, preço).
Crie um vetor de structs para armazenar informações de 15 produtos.
Crie uma função para preencher os dados dos produtos.
Crie uma função para calcular e exibir o valor total do inventário.
*/

#include <stdio.h>
#include <string.h>
#define TF 15

typedef struct {
	char nome[50];
	int codigo;
	float preco;
} ficha;

void preencherDados(ficha produto[]) {
	int i;
	
	for (i = 0; i < TF; i++) {
		printf("\nInsira o nome do produto %d: ", i+1);
		fflush(stdin);
		gets(produto[i].nome);
		
		printf("\nInsira o codigo do produto %d: ", i+1);
		scanf("%d",&produto[i].codigo);
		
		printf("\nInsira o preco do produto %d: ", i+1);
		scanf("%f",&produto[i].preco);
	}
}

void somarProdutos(ficha produto[]) {
	int i;
	float soma = 0;
	
	for (i = 0; i < TF; i++) {
		soma += produto[i].preco;
	}
	
	printf("\nO valor total do inventario e: %.2f", soma);
}

int main(){
	ficha produto[TF];
	
	preencherDados(produto);
	somarProdutos(produto);
}
