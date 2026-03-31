/* Crie uma função chamada Personagem() que retorna uma struct com nome, classe (guerreiro, mago etc.), nível e pontos de vida.
No main(), crie dois personagens e exiba seus campos. */

#include <stdio.h>
#include <string.h>
#define TF 2

typedef struct {
	char nome[30], classe[20];
	int nivel, pv;
}ficha;

ficha Personagem() {
	ficha personagem;
	printf("\nDigite o nome do personagem: "); fflush(stdin);
	gets(personagem.nome);
	
	printf("\nDigite a classe do personagem: ");fflush(stdin);
	gets(personagem.classe);
	
	printf("\nDigite o nivel do personagem: ");
	scanf("%d", &personagem.nivel);
	
	printf("\nDigite os pontos de vida do personagem: ");
	scanf("%d", &personagem.pv);
	
	return personagem;
}

int main() {
	ficha personagem[TF];
	int i;
	
	for (i = 0; i < TF; i++) {
		personagem[i] = Personagem();
		printf("\nFICHA DO PERSONAGEM");
		printf("\nNome do personagem: %s", personagem[i].nome);
		printf("\nClasse do personagem: %s", personagem[i].classe);
		printf("\nNivel do personagem: %d", personagem[i].nivel);
		printf("\nPontos de vida do personagem: %d", personagem[i].pv);
	}
}
