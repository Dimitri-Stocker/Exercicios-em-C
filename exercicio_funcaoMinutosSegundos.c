//Faça uma função que transforme minutos em segundos.

#include <stdio.h>

float converterEmSegundos (float minutos) {
	return minutos * 60;
}

int main () {
	float minutos;
	
	printf("Minutos: ");
	scanf("%f", &minutos);
	
	printf("%.2f minutos sao %.2f segundos.", minutos, converterEmSegundos(minutos));	
}

