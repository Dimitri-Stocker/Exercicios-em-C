/*Crie um arquivo chamado inteiros.txt, escrevendo em formato de texto os números inteiros de 1 a 100, um em cada linha. */

#include <stdio.h>

int main() {
	FILE *fp;
	int i;
	
	fp = fopen("inteiros.txt", "w");
	
	if (fp == NULL) {
		printf("\nErro ao abrir ou criar o arquivo.");
	}
	
	for (i = 1; i <= 100; i++) {
		fprintf(fp, "%d\n", i);
	}
	
	fclose(fp);
	
	printf("\nOs numeros foram escritos com sucesso.");
}
