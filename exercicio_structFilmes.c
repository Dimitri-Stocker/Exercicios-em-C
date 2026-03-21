/*Crie uma struct para armazenar informações de um filme(título, diretor, ano de lançamento).
Crie um vetor de structs para armazenar informações de 7 filmes.
Crie uma função para preencher os dados dos filmes.
Crie uma função para buscar um filme pelo título e exibir as informações.
*/

#include <stdio.h>
#include <string.h>
#define TF 7

typedef struct {
	char titulo[50], diretor[50];
	int anoLancamento;
} dados;

void preencherDados (dados filme[TF]) {
	int i;
	
	for (i = 0; i < TF; i++) {
		printf("Insira o titulo do filme: ");
		fflush(stdin);
		gets(filme[i].titulo);
		
		printf("\nInsira o nome do diretor do filme: ");
		fflush(stdin);
		gets(filme[i].diretor);
		
		printf("Insira o ano de lancamento do filme: ");
		scanf("%d", &filme[i].anoLancamento);
	}
}

void buscarFilme(char tituloBusca[50], dados filme[TF]) {
	int i, achou = 0;
	
	for (i = 0; i < TF; i++) {
		if (stricmp(tituloBusca, filme[i].titulo) == 0) {
			printf("\nTitulo: %s", filme[i].titulo);
			printf("\nDiretor: %s", filme[i].diretor);
			printf("\nAno de lancamento: %d", filme[i].anoLancamento);
			achou++;
		}
	}
	
	if (achou == 0 )
		printf("\nFilme nao encontrado.");
}

int main() {
	dados filme[TF];
	char tituloBusca[50];
	
	preencherDados(filme);
	
	printf("\nBUSCA");
	printf("\nDigite o titulo para buscar um filme: ");
	fflush(stdin);
	gets(tituloBusca);
	
	buscarFilme(tituloBusca, filme);
}
