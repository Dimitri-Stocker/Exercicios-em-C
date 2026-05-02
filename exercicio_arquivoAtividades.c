/* Criar um programa para cadastrar atividades no mês de maio. A estrutura deve conter:
Data (dia, mês e ano), Atividade, Local e Responsável.
Após os cadastros, listar todas as atividades cadastradas.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
}Data;

typedef struct{
	Data data;
	char atividade[50], local[50], responsavel[50];
}Ficha;

void mostrar(){
	Ficha cadastro;
	FILE *fp = fopen("cadastroAtividades.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo");
	}
	
	while(fread(&cadastro, sizeof(Ficha), 1, fp) == 1){
		printf("Nome da atividade: %s\n", cadastro.atividade);
		printf("Local: %s\n", cadastro.local);
		printf("Responsavel: %s\n", cadastro.responsavel);
		printf("Data: %d/%d/%d\n\n", cadastro.data.dia, cadastro.data.mes, cadastro.data.ano);
	}
	fclose(fp);
}

void cadastrar() {
	Ficha cadastro;
	char resposta[8];
	FILE *fp = fopen("cadastroAtividades.bin", "ab");
	if (fp == NULL){
		printf("Erro ao abrir ou criar arquivo.");
	}
	
	printf("Deseja cadastrar atividade? (Sim/Nao): "); fflush(stdin);
	gets(resposta);
	
	while(stricmp(resposta,"sim") == 0) {
		printf("Nome da atividade: ");
		fgets(cadastro.atividade, sizeof(cadastro.atividade), stdin);
		
		printf("Local: ");
		fgets(cadastro.local, sizeof(cadastro.local), stdin);
		
		printf("Responsavel: ");
		fgets(cadastro.responsavel, sizeof(cadastro.responsavel), stdin);
		
		printf("Dia: ");
		scanf("%d", &cadastro.data.dia);
		
		printf("Mes: ");
		scanf("%d", &cadastro.data.mes);
		
		printf("Ano: ");
		scanf("%d", &cadastro.data.ano);
		
		fwrite(&cadastro, sizeof(Ficha), 1, fp);
		printf("Dados cadastrados com sucesso.");
		
		printf("Deseja cadastrar nova atividade? (Sim/Nao): "); fflush(stdin);
		gets(resposta);
	}
	fclose(fp);
	mostrar();
}

int main() {
	cadastrar();
}
