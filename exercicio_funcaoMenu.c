/*Faça uma função para exibir e ler as opções de um menu como abaixo:
1 - Calcular o valor de reajuste da mensalidade do plano de saúde, sabendo que foi concedido um aumento de 9%;
2 - Converter um valor em dólares para reais;
3 - Calcular o fatorial de um número. Ex: 5! = 5*4*3*2*1 = 120;
4 - Cálculo de consumo de combustível. 
Faça uma função que receba a distância em KM e a quantidade de litros de combustível consumidos por um carro em percurso, calcule o consumo em KM/L e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO		(KM/L)		MENSAGEM
Menor que     8         Venda o carro!
Entre         8 e 14    Econômico!
Maior         14        Super econômico!
5 - Sair.
OBS: as opções do menu devem ser implementadas com uso de função. */

#include <stdio.h>

void calcularMensalidade(){
	float mensalidade, reajuste;
	
	printf("Insira o valor da mensalidade: ");
	scanf("%f", &mensalidade);
	reajuste = (mensalidade * 9) / 100;
	printf("O valor reajustado da mensalidade e: %.2f", mensalidade + reajuste);
}

void converterDolar() {
	float dolar;
	
	printf("Insira o valor em dolares: ");
	scanf("%f", &dolar);
	printf("U$%.2f sao R$%.2f", dolar, dolar*5.12);
}

void calcularFatorial() {
	int fatorial = 1, numero, i;
	
	printf("Insira o numero desejado: ");
	scanf("%d", &numero);
	for (i = 1; i <= numero; i++){
		fatorial *= i;
	}
	printf("%d", fatorial);
	
}

void consumoCombustivel() {
	float distancia, litros, consumo;
	
	printf("Insira a distancia em KM: ");
	scanf("%f", &distancia);
	
	printf("Insira a quantidade de litros de gasolina consumidos: ");
	scanf("%f", &litros);
	
	consumo = distancia / litros;
	printf("Seu carro consome %.2f KM/L.", consumo);
	
	if (consumo < 8) 
		printf("Venda o carro!");
	else if (consumo < 14)
		printf("Economico!");
	else
		printf("Super economico!");
}

int main () {
	int menu;
	
	printf("\tMENU");
	printf("\n1 - Reajuste de mensalidade");
	printf("\n2 - Converter dolares em reais");
	printf("\n3 - Calcular fatorial");
	printf("\n4 - Calcular consumo de combustivel");
	printf("\n5 - Sair");
	printf("\nEscolha sua opcao: ");
	scanf("%d", &menu);
	
	switch (menu){
		case 1: calcularMensalidade(); break;
		case 2: converterDolar(); break;
		case 3: calcularFatorial(); break;
		case 4: consumoCombustivel(); break;
		case 5: break;
		default: printf("Opcao invalida."); break;
	}
}
