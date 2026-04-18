/*Faça um programa em C que calcule os juros de um determinado saldo com base em uma taxa, ambos informados pelo usuário.
O programa deve utilizar uma função para calcular os juros e atualizar o saldo com base no saldo antigo acrescido dos juros.
Ao final, a aplicação deve imprimir o total de juros e o novo saldo. */

#include <stdio.h>

float calcJuros (float *saldo, float taxa) {
	float juros;
	juros = (*saldo * taxa)/100;
	*saldo += juros;
	return juros;
}

int main() {
		float saldo, taxa, resultado;
		printf("Informe o saldo: ");
		scanf("%f", &saldo);
		
		printf("Informe a taxa inserindo a porcentagem. (Ex: 15%% = 15): ");
		scanf("%f", &taxa);
		
		resultado = calcJuros(&saldo, taxa);
		
		printf("Juros totais: %.2f", resultado);
		printf("\nSaldo atualizado: %.2f", saldo);
}


