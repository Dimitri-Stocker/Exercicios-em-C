/*Faça a leitura do arquivo inteiros.txt, imprimindo um número por linha. */
#include <stdio.h>

int main() {
	FILE *fp;
	int valor;
	
	fp = fopen("inteiros.txt", "r");
	
	if (fp == NULL){
		printf("Erro ao abrir ou criar o arquivo.");
	}
	
	while (fscanf(fp, "%d", &valor) != EOF) {
		printf("%d\n", valor);
	}
	
	fclose(fp);
}
