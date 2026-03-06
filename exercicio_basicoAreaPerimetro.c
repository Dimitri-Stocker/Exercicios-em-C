//Fornecido o valor de um dos lados de um quadrado, calcule e exiba a sua área e seu perímetro.

#include <stdio.h>

int main() {
	float lado, area, perimetro;
	
	printf("Insira o valor do lado do quadrado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	perimetro = 4 * lado;
	
	printf("\nArea do quadrado: %.2f", area);
	printf("\nPerimetro do quadrado: %.2f", perimetro);
}
