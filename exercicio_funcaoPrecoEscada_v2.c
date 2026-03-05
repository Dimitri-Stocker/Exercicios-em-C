/*Uma empresa especializada na fabricação de escadas sob medida precisa automatizar o cálculo do comprimento necessário de uma escada apoiada em uma parede, bem como o valor final a ser cobrado pelo cliente.
O cliente informa a altura que deseja alcançar na parede e a distância da base da escada até a parede.
O comprimento da escada deve ser calculado utilizando o Teorema de Pitágoras:
comprimento = raiz quadrada da soma da altura^2 e base^2
O preço da escada é calculado da seguinte forma:
R$1.500 por metro de escada + Taxa fixa de R$900
Desenvolva um programa em C que:
1 - Crie uma função para calcular o comprimento da escada;
2 - Crie uma função para calcular o preço final;
3 - No programa final, utilize as funções criadas para apresentar o valor final ao usuário.
*/

#include <stdio.h>
#include <math.h>

float calcularComprimento(float altura, float distancia) {
	float comprimento = pow(altura, 2) + pow(distancia,2);
	return sqrt(comprimento);
}

float calcularPreco (float comprimento) { 
	return comprimento * 1500 + 900;
}

int main () {
	float altura, distancia, comprimento;
	
	printf("Insira a altura: ");
	scanf("%f", &altura);
	
	printf("Insira a distancia: ");
	scanf("%f", &distancia);
	
	comprimento = calcularComprimento(altura, distancia);
	printf("O preco da escada e: %.2f", calcularPreco(comprimento));
}

