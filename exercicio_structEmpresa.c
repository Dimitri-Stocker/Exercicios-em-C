/*Crie uma estrutura para controlar ações de uma bolsa de valores com as seguintes informações:
- Nome da empresa;
- Área de atuação da empresa;
- Valor atual da ação (em reais).

Preencha os campos da struct;
Faça uma função para imprimir os campos da struct;
Faça uma função para comprar, onde você vai informar a quantidade de ações que deseja comprar e a função deverá informar o valor que você irá pagar pela aquisição.
*/

#include <stdio.h>
#include <string.h>

struct bolsa {
	char nome[50], area[80];
	float valorAcao;
};

void exibirDados(struct bolsa empresa) {
	printf("\nA empresa %s atua na area %s. O valor atual de suas acoes e: R$%.2f.", empresa.nome, empresa.area, empresa.valorAcao);
}

void comprarAcoes(float valorAcao) {
	int quantidade;
	printf("\nQuantas acoes deseja comprar? ");
	scanf("%d", &quantidade);
	
	printf("\nValor da compra: %.2f", quantidade * valorAcao);
}

int main() {
	struct bolsa empresa;
	
	printf("Digite o nome da empresa: ");
	fflush(stdin);
	gets(empresa.nome);
	
	printf("\nDigite a area de atuacao da empresa: ");
	fflush(stdin);
	gets(empresa.area);
	
	printf("\nDigite o valor atual da acao (em reais): ");
	scanf("%f", &empresa.valorAcao);
	
	exibirDados(empresa);
	comprarAcoes(empresa.valorAcao);
}
