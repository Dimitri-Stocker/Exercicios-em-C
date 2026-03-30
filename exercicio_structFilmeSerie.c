/*Faça um programa para cadastrar seu Top 10 séries/filmes favoritos.
Sua estrutura deve ter plataforma (Prime Video, Globo Play, Netflix...), nome do filme/série, gênero, nome do ator principal e duração em minutos.
Montar um menu com as opções:
1 - Cadastrar Filme/Série
2 - Listar todos os cadastros
3 - Listar Filme/Série por Gênero
4 - Listar Filme/Série com duração entre 90 e 120 minutos
5 - Listar Filme/Série por Plataforma
6 - Sair
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#define TF 10

//Cabeçalhos
void cadastrarFilme();
void listarCadastros();
void listarGenero();
void listarDuracao();
void listarPlataforma();

typedef struct {
	char plataforma[20], nome[50], genero[20], atorPrincipal[30];
	int duracao;
}cadastro;

int main() {
	cadastro filme[TF];
	int menu;
	
	printf("\nMENU");
	printf("\n1 - Cadastrar Filme/Serie");
	printf("\n2 - Listar todos os cadastros");
	printf("\n3 - Listar Filme/Serie por Genero");
	printf("\n4 - Listar Filme/Serie com Duracao entre 90 e 120 minutos");
	printf("\n5 - Listar Filme/Serie por Plataforma");
	printf("\n6 - Sair");
	printf("\nEscolha sua opcao: ");
	scanf("%d", &menu);
	
	while (menu != 6) {
		switch(menu) {
			case 1: cadastrarFilme(filme); break;
			case 2: listarCadastros(filme); break;
			case 3: listarGenero(filme); break;
			case 4: listarDuracao(filme); break;
			case 5: listarPlataforma(filme); break;
			default: printf("\nOpcao invalida. "); break;
		}
		
		printf("\n");
		system("pause");
		system("cls");
		//sai lido
		
		printf("\nMENU");
		printf("\n1 - Cadastrar Filme/Serie");
		printf("\n2 - Listar todos os cadastros");
		printf("\n3 - Listar Filme/Serie por Genero");
		printf("\n4 - Listar Filme/Serie com Duracao entre 90 e 120 minutos");
		printf("\n5 - Listar Filme/Serie por Plataforma");
		printf("\n6 - Sair");
		printf("\nEscolha sua opcao: ");
		scanf("%d", &menu);
	}
}

//1 - Cadastrar Filme ou Série
void cadastrarFilme(cadastro filme[]) {
	int i;
	for (i = 0; i < TF; i++) {
		printf("\nDigite a plataforma do filme/serie: ");fflush(stdin);
		gets(filme[i].plataforma);
		
		printf("\nDigite o nome do filme/serie: ");fflush(stdin);
		gets(filme[i].nome);
		
		printf("\nDigite o genero do filme/serie: ");fflush(stdin);
		gets(filme[i].genero);
		
		printf("\nDigite o nome do ator principal: ");fflush(stdin);
		gets(filme[i].atorPrincipal);
		
		printf("\nDigite a duracao do filme em minutos: ");
		scanf("%d", &filme[i].duracao);
	}
}

//2 - Listar Todos os Cadastros
void listarCadastros(cadastro filme[]) {
	int i;
	
	printf("\nTODOS OS CADASTROS");
	for (i = 0; i < TF; i++) {
		printf("\nPlataforma: %s", filme[i].plataforma);
		printf("\nNome: %s", filme[i].nome);
		printf("\nGenero: %s", filme[i].genero);
		printf("\nAtor principal: %s", filme[i].atorPrincipal);
		printf("\nDuracao: %d", filme[i].duracao);
	}
}

//3 - Listar Filme ou Série por Gênero
void listarGenero(cadastro filme[]) {
	char buscaGenero[20];
	int i, encontrou = 0;
	
	printf("\nDigite o genero que deseja buscar: "); fflush(stdin);
	gets(buscaGenero);
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaGenero, filme[i].genero) == 0) {
			printf("\nPlataforma: %s", filme[i].plataforma);
			printf("\nNome: %s", filme[i].nome);
			printf("\nAtor principal: %s", filme[i].atorPrincipal);
			printf("\nDuracao: %d", filme[i].duracao);
			encontrou = 1;
		}
	}
	
	if (encontrou == 0)
		printf("\nNao foram encontrados filmes ou series cadastrados com esse Genero.");
}

//4 - Listar Filme ou Série com Duração entre 90 e 120 minutos
void listarDuracao(cadastro filme[]) {
	int i, encontrou = 0;
	
	for (i = 0; i < TF; i++) {
		if (filme[i].duracao >= 90 && filme[i].duracao <= 120) {
			printf("\nNome: %s", filme[i].nome);
			printf("\nGenero: %s", filme[i].genero);
			printf("\nPlataforma: %s", filme[i].plataforma);
			printf("\nAtor principal: %s", filme[i].atorPrincipal);
			encontrou = 1;
		}
	}
	
	if (encontrou == 0)
		printf("\nNao foram encontrados filmes ou series com duracao entre 90 e 120 minutos.");
}

//5 - Listar Filme ou Série por Plataforma
void listarPlataforma(cadastro filme[]) {
	int i, encontrou = 0;
	char buscaPlataforma[20];
	
	printf("\nDigite a plataforma que deseja buscar: "); fflush(stdin);
	gets(buscaPlataforma);
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaPlataforma, filme[i].plataforma) == 0) {
			printf("\nNome: %s", filme[i].nome);
			printf("\nGenero: %s", filme[i].genero);
			printf("\nAtor principal: %s", filme[i].atorPrincipal);
			printf("\nDuracao: %d", filme[i].duracao);
			encontrou = 1;
		}
	}
	
	if (encontrou == 0)
		printf("\nNao foram encontrados filmes ou series cadastrados nessa plataforma.");
}
