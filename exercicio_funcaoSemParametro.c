//Escrever uma função para calcular a média de 2 numeros reais, com Retorno mas sem Parâmetros

#include <stdio.h>

float calcularMedia () {
	float nota1, nota2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	return printf("Media das notas: %.2f", (nota1 + nota2) / 2);
}

int main() {
	calcularMedia();	
}
