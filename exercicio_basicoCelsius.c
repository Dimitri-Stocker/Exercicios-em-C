/*Fornecido o valor em graus Fahrenheit, transforme-o em graus Celsius através da fórmula:
C = (F - 32)* 5 / 9
*/

#include <stdio.h>

int main() {
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32) * 5 / 9;
	
	printf("\nA temperatura em graus Celsius e: %.2f", celsius);
}
