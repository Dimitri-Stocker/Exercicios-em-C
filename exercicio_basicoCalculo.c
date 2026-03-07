/*Fornecido o valor de T, calcule o valor de W, sabendo que:
W = 2T + 4Y - 3X
X = 2T - 4
Y = T/2 + 4
*/

#include <stdio.h>

int main() {
	float T, W, X, Y;
	
	printf("Insira o valor de T: ");
	scanf("%f", &T);
	
	X = 2 * T - 4;
	Y = T / 2 + 4;
	W = 2 * T + 4 * Y - 3 * X;
	
	printf("\nValor de W: %.2f", W);
}
