

#include <stdio.h>

void triplicaNumero(int *numero) {
	*numero *= 3;
}

int main() {
	int num;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	triplicaNumero(&num);
	
	printf("\nO triplo do numero digitado e: %d", num);
}

