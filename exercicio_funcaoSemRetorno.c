//Escrever uma função para calcular a média de 2 numeros reais, sem Retorno

#include <stdio.h>

float calcularMedia (float nota1, float nota2) {
	float media = (nota1 + nota2) / 2;
	printf("Media das notas: %.2f", media);
}

int main() {
	float nota1, nota2;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	calcularMedia(nota1, nota2);	
}
