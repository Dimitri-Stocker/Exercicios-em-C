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

float somarRaiz() {
	float base, altura, r1, r2, somar;
	printf("Informe a base e a altura: \n");
	scanf("%f%f", &base, &altura);
	r1 = base*base;
	r2 = altura*altura;
	somar = r1 + r2;
	return sqrt(somar);
}

void precoEscada(float comprimento) {
	float preco;
	preco = (comprimento*1500)+900;
	printf("\n O preco da escada e: %.2f", preco);
}

int main () {
	float resposta;
	resposta = somarRaiz();
	precoEscada(resposta);
}

