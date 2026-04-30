/* Faça um programa em C que crie um arquivo texto em disco, com o nome "dados.txt", e escreva neste arquivo em disco as letras do alfabeto de a até z.
Abra este arquivo em um editor de textos, como por exemplo o Bloco de Notas, para verificar se efetuou a gravação das letras.
*/

#include <stdio.h>

int main() {
	FILE *fp;
	char ch;
	int i;
	
	fp = fopen("dados.txt", "w");
	
	if (fp == NULL) {
		printf("Erro no arquivo.");
	}
	
	else {
		for (i = 97; i < 123; i++){
			ch = i;
			putc(ch, fp);
		}
	}
}
