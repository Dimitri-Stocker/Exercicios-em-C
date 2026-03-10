//Fornecido duas notas de um aluno e seus respectivos pesos, calcule e exiba a média ponderada das notas. 

#include <stdio.h>

int main() {
	int peso1, peso2;
	float nota1, nota2, mediaPonderada;
	
	printf("Digite a nota da primeira prova: ");
	scanf("%f", &nota1);
	
	printf("\nDigite o peso da primeira prova: ");
	scanf("%d", &peso1);
	
	printf("\nDigite a nota da segunda prova: ");
	scanf("%f", &nota2);
	
	printf("\nDigite o peso da segunda prova: ");
	scanf("%d", &peso2);
	
	mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);
	
	printf("A media ponderada das notas e: %.2f", mediaPonderada);
}
