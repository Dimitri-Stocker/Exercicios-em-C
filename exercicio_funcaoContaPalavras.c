/*Crie uma função chamada conta_palavras que receba uma string como parâmetro e retorne a quantidade de palavras presentes na frase.
Considere que as palavras estão separadas por um único espaço. */

#include <stdio.h>
#include <string.h>
#define tf 50

int conta_palavras(char frase[]) {
	int cont = 1, i;
	
	for (i = 0; i < strlen(frase); i++ ) {
		if (frase[i] == ' ') {
			cont++;
		}
	}
	return cont;
}

int main() {
	char frase[tf];
	
	printf("Digite uma frase: ");
	fgets(frase, 50, stdin);
	puts(frase);
	
	printf("Essa frase possui %d palavras", conta_palavras(frase));
}


