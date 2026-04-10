/*Faça um algoritmo que leia cinco notas e faça a média das notas. Após isso, informe a situação do aluno:
>= 7  		Aprovado
4<= e <7=   Recuperação
< 4 		Reprovado
Utilize três funções para apresentar a situação do aluno. */

#include <stdio.h>

void fAprovado(){
	printf("\nAluno aprovado.");
}

void fRecuperacao() {
	printf("\nAluno em recuperacao.");
}
void fReprovado() {
	printf("\nAluno reprovado.");
}
int main() {
	int i;
	float vNotas[5], media, soma = 0;
	
	for (i = 0; i < 5; i++){
		printf("Nota %d: ", i+1);
		scanf("%f", &vNotas[i]);
		soma += vNotas[i];
	}
	
	media = soma / 5;
	printf("Media final: %.2f", media);
	
	if (media >= 7)
		fAprovado();
	else if (media >= 4)
		fRecuperacao();
	else
		fReprovado();
}
