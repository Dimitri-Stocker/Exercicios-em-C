/*Desenvolva uma função que receba por referência o salário de um funcionário e uma porcentagem de aumento.
A função deve atualizar o salário com o novo valor após o reajuste. */

#include <stdio.h>

void calcularSalario(float *salario, float aumento) {
	*salario = *salario + (*salario * aumento) / 100;
}

int main () {
	float salario, aumento;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	printf("Digite a porcentagem do aumento: ");
	scanf("%f", &aumento);
	
	calcularSalario(&salario, aumento);
	
	printf("Salario reajustado: %.2f.", salario);
}

