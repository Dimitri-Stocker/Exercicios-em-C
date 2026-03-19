//Defina estruturas para armazenar a data do pagamento de um boleto. Sua estrutura deve ser composta por nome da conta, data (dia, mês e ano) e valor.

#include <stdio.h>
#include <string.h>

struct pagamento {
	char nome[50];
	int dia, mes, ano;
	float valor;
};

void exibirDados(struct pagamento boleto) {
	printf("O boleto %s de valor %.2f vence na data %d/%d/%d", boleto.nome, boleto.valor, boleto.dia, boleto.mes, boleto.ano);
}

int main() {
	struct pagamento boleto;
	
	printf("Digite o nome do boleto: ");
	fflush(stdin);
	gets(boleto.nome);
	
	printf("\nDigite o dia de pagamento do boleto: ");
	scanf("%d", &boleto.dia);
	
	printf("\nDigite o mes de pagamento do boleto: ");
	scanf("%d", &boleto.mes);
	
	printf("\nDigite o ano de pagamento do boleto: ");
	scanf("%d", &boleto.ano);
	
	printf("\nDigite o valor do boleto: ");
	scanf("%f", &boleto.valor);
	
	exibirDados(boleto);
}
