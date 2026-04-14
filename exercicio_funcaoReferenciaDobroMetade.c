/*Crie uma função que receba um número inteiro por referência, alterando o valor para o seu dobro, e outra função que o altere para sua metade */

#include <stdio.h>

void numDobro(int *num){
	 *num *= 2;
}

void numMetade(int *num) {
	*num /= 2;
}

int main() {
	int num, container;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	container = num;
	
	numDobro(&num);
	numMetade(&container);
	
	printf("O dobro do numero e: %d", num );
	printf("\nA metade do numero e: %d", container);	
}
