/*Faça um programa que leia um vetor com dados de 10 cursos: código, título, instrutor, quantidade de horas e preço.
Crie uma função que procure um curso, perguntando ao usuário e mostre os dados do curso encontrado.
Mostrar também a média de preço dos cursos e o tempo médio de duração.
*/

#include <stdio.h>
#include <string.h>
#define TF 10

typedef struct{
	char titulo[50], instrutor[50];
	int codigo, qtdHoras;
	float preco;
} ficha;

void procurarCurso(ficha curso[]) {
	char buscaCurso[50];
	int i;
	
	printf("\nDigite o nome do curso que deseja procurar: ");
	fflush(stdin);
	gets(buscaCurso);
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaCurso, curso[i].titulo) == 0) {
			printf("\nDADOS DO CURSO: ");
			printf("\nInstrutor: %s", curso[i].instrutor);
			printf("\nCodigo: %d", curso[i].codigo);
			printf("\nQuantidade de horas: %d", curso[i].qtdHoras);
			printf("\nPreco do curso: %.2f", curso[i].preco);
		}
	}
}

void mediaCurso(ficha curso[]) {
	int i, cont = 0;
	float soma = 0;
	
	for (i = 0; i < TF; i++) {
		soma += curso[i].preco;
		cont++;
	}
	printf("\nA media de preco dos cursos e: %.2f", soma/cont);
}

void mediaDuracao(ficha curso[]) {
	int i, cont = 0;
	float soma = 0;
	
	for (i = 0; i < TF; i++) {
		soma += curso[i].qtdHoras;
		cont++;
	}
	printf("\nO tempo medio de duracao e: %.2f", soma/cont);
}

int main() {
	ficha curso[TF];
	int i;
	
	for (i = 0; i < TF; i++) {
		printf("\nDigite o titulo do curso: ");
		fflush(stdin);
		gets(curso[i].titulo);
		
		printf("\nDigite o nome do instrutor: ");
		fflush(stdin);
		gets(curso[i].instrutor);
		
		printf("\nDigite o codigo do curso: ");
		scanf("%d", &curso[i].codigo);
		
		printf("\nDigite a quantidade de horas do curso: ");
		scanf("%d", &curso[i].qtdHoras);
		
		printf("\nDigite o preco do curso: ");
		scanf("%f", &curso[i].preco);
	}
	
	procurarCurso(curso);
	mediaCurso(curso);
	mediaDuracao(curso);
}
