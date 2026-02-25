//Escrever uma função para calcular a média de 2 numeros reais, com Retorno

#include <stdio.h>

float calcularMedia (float nota1, float nota2) {
	return (nota1 + nota2) / 2;
}

int main() {
	float nota1, nota2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Media das notas: %.2f", calcularMedia(nota1, nota2));	
}
