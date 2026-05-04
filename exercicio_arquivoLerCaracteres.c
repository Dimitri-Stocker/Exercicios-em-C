/* Crie um programa em C que crie/abra um arquivo texto de nome "arq.txt" e permita que o usuário entre com diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0' para encerrar a entrada de caracteres.
Feche o arquivo e abra novamente o "arq.txt", lendo caractere por caractere, escrevendo na tela todos os caracteres armazenados no arquivo.
*/

#include <stdio.h>

int main() {
	FILE *fp;
	char ch;
	
	fp = fopen("arq.txt", "a");
	
	if (fp == NULL) {
		printf("\nErro no arquivo.");
	}
	
	else {
		printf("Digite um caractere. Pressione 0 (zero) para Sair: "); fflush(stdin);
		scanf("%c", &ch);
		
		while (ch != '0') {
			putc(ch, fp);
			
			printf("Digite um caractere. Pressione 0 (zero) para Sair: "); fflush(stdin);
			scanf("%c", &ch);
		}
	}
	fclose(fp);
	
	fp = fopen("arq.txt", "r");
	
	while (ch != EOF) {
		ch = getc(fp);
		printf("%c", ch);
	}
	
	fclose(fp);
}
