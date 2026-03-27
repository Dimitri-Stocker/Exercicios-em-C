//Defina estruturas para realizar o agendamento de uma prova. É preciso ter data completa (dia, mês e ano), horário (horas, minutos) e nome da disciplina. 

#include <stdio.h>
#include <stdio.h>

struct agenda {
	int dia, mes, ano, horas, minutos;
	char nome[50];
};

void exibirDados(struct agenda prova) {
	printf("\nData da prova de %s: ", prova.nome);
	printf("%d/%d/%d, %d:%d", prova.dia, prova.mes, prova.ano, prova.horas, prova.minutos);
}

int main() {
	struct agenda prova;
	
	printf("AGENDAMENTO DE PROVA");
	printf("\nDATA");
	printf("\nDigite o dia da prova: ");
	scanf("%d", &prova.dia);
	
	printf("\nDigite o mes da prova: ");
	scanf("%d", &prova.mes);
	
	printf("\nDigite o ano da prova: ");
	scanf("%d", &prova.ano);
	
	printf("\nHORARIO");
	printf("\nDigite a hora da prova: ");
	scanf("%d", &prova.horas);
	
	printf("\nDigite os minutos da prova: ");
	scanf("%d", &prova.minutos);
	
	printf("\nDigite o nome da disciplina: ");
	fflush(stdin);
	gets(prova.nome);
	
	exibirDados(prova);
}
