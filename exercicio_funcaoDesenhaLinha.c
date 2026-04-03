/*Faça uma função chamada desenha_linha. Ela deve desenhar uma linha na tela usando vários símbolos de igual. (Ex: ====).
A função recebe por parâmetro quantos sinais de igual serão mostrados. */

#include <stdio.h>

int desenhaLinha (int quantidade) {
	int i;
	for (i = 0; i < quantidade; i++) {
		printf("=");
	}
}

int main () {
	int linhas;
	
	printf("Insira a quantidade de linhas: ");
	scanf("%d", &linhas);
	desenhaLinha(linhas);
}

