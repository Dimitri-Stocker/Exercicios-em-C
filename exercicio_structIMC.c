/*Defina uma estrutura para armazenar a ficha médica de um paciente com os dados de peso e altura.
Criar uma função para calcular o IMC desse paciente.
Criar uma função para classificar o IMC conforme abaixo:

IMC								CLASSIFICAÇÃO
Menor que 18,5					Baixo peso
De 18,5 a 24,9					Peso normal
De 25 a 29,9					Sobrepeso
De 30 a 34,9					Obesidade grau 1
De 35 a 39,9					Obesidade grau 2
Igual ou maior que 40			Obesidade grau 3
*/

#include <stdio.h>

struct ficha {
	float peso, altura;
};

float calcularIMC(struct ficha paciente) {
	return paciente.peso / (paciente.altura * paciente.altura);
}

void classificarIMC(float imc) {
	if (imc < 18.5)
		printf("\nBaixo peso.");
	else if (imc < 24.9)
		printf("\nPeso normal.");
	else if (imc < 29.9)
		printf("\nSobrepeso.");
	else if (imc < 34.9)
		printf("\nObesidade grau 1.");
	else if (imc < 39.9)
		printf("\nObesidade grau 2.");
	else
		printf("\nObesidade grau 3.");
}

int main() {
	struct ficha paciente;
	float imc;
	
	printf("Digite o peso do paciente: ");
	scanf("%f", &paciente.peso);
	
	printf("\nDigite a altura do paciente: ");
	scanf("%f", &paciente.altura);
	
	imc = calcularIMC(paciente);
	printf("\nO IMC e: %.2f", imc);
	classificarIMC(imc);
}
