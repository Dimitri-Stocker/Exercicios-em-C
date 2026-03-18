/* Elabore um algoritmo que calcule o que deve ser pago por um curso, considerando o preço normal de venda e a escolha da condição de pagamento.
Utilize os códigos da tabela a seguir para informar qual a condição de pagamento escolhida pelo Usuário e efetue o cálculo adequado.
Depois de executado o cálculo, deve-se informar ao Usuário o valor de venda, o valor do desconto ou juros, e o valor total a ser pago.

CÓDIGO			CONDIÇÃO DE PAGAMENTO
1				À vista em dinheiro ou cheque, recebe 10% de desconto
2				À vista no cartão de crédito, recebe 5% de desconto
3				Em 2 vezes, preço normal de venda sem juros
4				Em 3 vezes, preço normal de venda mais juros de 10%

*/

#include <stdio.h>

int main()
{
	int menu;
	float valor_venda = 1000, valor_desconto, valor_juros, valor_total;
	
	printf("\tFORMAS DE PAGAMENTO\n");
	printf("\n1 - A vista em dinheiro ou cheque");
	printf("\n2 - A vista no cartao de credito");
	printf("\n3 - Em 2 vezes");
	printf("\n4 - Em 3 vezes\n");
	printf("\nEscolha uma opcao: ");
	
	scanf("%d", &menu);
	
	switch(menu)
	{
		case 1:
			valor_desconto = valor_venda * 10/100;
			valor_total = valor_venda - valor_desconto;
			printf("\nO valor de venda do curso e: %.2f", valor_venda);
			printf("\nDesconto de 10%%. O valor do desconto e: %.2f", valor_desconto);
			printf("\nO valor final e: %.2f", valor_total);
			break;
			
		case 2:
			valor_desconto = valor_venda * 5/100;
			valor_total = valor_venda - valor_desconto;
			printf("\nO valor de venda do curso e: %.2f", valor_venda);
			printf("\nDesconto de 5%%. O valor do desconto e: %.2f", valor_desconto);
			printf("\nO valor final e: %.2f", valor_total);
			break;
			
		case 3:
			valor_total = valor_venda / 2;
			printf("\nO valor de venda do curso e: %.2f", valor_venda);
			printf("\nEssa modalidade de venda nao possui desconto ou juros.");
			printf("\nO valor de cada parcela e: %.2f", valor_total);
			break;
			
		case 4:
			valor_juros = valor_venda * 10/100;
			valor_total = (valor_venda + valor_juros) / 3;
			printf("\nO valor de venda do curso e: %.2f", valor_venda);
			printf("\nJuros de 10%%. O valor dos juros e: %.2f", valor_juros);
			printf("\nO valor de cada parcela e: %.2f", valor_total);
			break;
			
		default:
			printf("Dados invalidos"); break;
			
	}
}
