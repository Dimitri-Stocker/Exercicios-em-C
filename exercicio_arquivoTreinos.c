/* Definir uma estrutura para cadastrar treinos de uma academia.
Campos: Código do treino, Nome do Aluno, Exercício, Séries, Repetições, Data (dia, mês e ano).
O programa deve permitir cadastrar 10 alunos e, ao final, listar todos os treinos cadastrados.
*/

#include <stdio.h>

typedef struct{
	int dia, mes, ano;
}ficha;

typedef struct{
	ficha data;
	int codigo, series, reps;
	char nome[30], exercicio[30]; 
}cadastro;

int main() {
	cadastro treino[2];
	int i;
	
	FILE *fp = fopen("arquivo.bin", "wb");
	
	if (fp == NULL) {
		printf("Erro ao abrir ou criar arquivo.");
	}
	
	for (i = 0; i < 2; i++) {
		printf("Digite o nome do aluno: ");
		scanf("%s", treino[i].nome);
		
		printf("Codigo do exercicio: ");
		scanf("%d", &treino[i].codigo);
		
		printf("Nome do exercicio: ");
		scanf("%s", treino[i].exercicio);
		
		printf("Series: ");
		scanf("%d", &treino[i].series);
		
		printf("Repeticoes: ");
		scanf("%d", &treino[i].reps);
		
		printf("Dia: ");
		scanf("%d", &treino[i].data.dia);
		
		printf("Mes: ");
		scanf("%d", &treino[i].data.mes);
		
		printf("Ano: ");
		scanf("%d", &treino[i].data.ano);
	}
	
	fwrite(&treino, sizeof(cadastro), 2, fp);
	printf("Treino cadastrado com sucesso.\n\n");
	fclose(fp);
	
	//ler arquivo
	fp = fopen("arquivo.bin", "rb");
	
	fread(&treino, sizeof(cadastro), 2, fp);
	for (i = 0; i < 2; i++) {
		printf("Nome do aluno: %s \n", treino[i].nome);
		printf("Codigo do exercicio: %d \n", treino[i].codigo);
		printf("Nome do exercicio: %s \n", treino[i].exercicio);
		printf("Series: %d\n", treino[i].series);
		printf("Repeticoes: %d\n", treino[i].reps);
		printf("Dia: %d\n", treino[i].data.dia);
		printf("Mes: %d\n", treino[i].data.mes);
		printf("Ano: %d\n", treino[i].data.ano);
	}
	
	fclose(fp);
}
