/* Definir uma estrutura para cadastrar palestras de um Congresso de TDIC (Tecnologias Digitais da Informação e Comunicação).
Campos:
Código, Palestrante, Nome da palestra, Local, Data (dia, mês e ano) e Minicurriculo.
Após os cadastros, listar todas as palestras cadastradas.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
}Data;

typedef struct{
	Data data;
	char nome[50], palestrante[50], local[50], curriculo[100];
	int codigo;
}Ficha;

void mostrar() {
	Ficha palestra;
	FILE *fp = fopen("cadastroPalestra.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	
	while (fread(&palestra, sizeof(Ficha), 1, fp) == 1){
		printf("Nome da Palestra: %s\n", palestra.nome);
		printf("Palestrante: %s\n", palestra.palestrante);
		printf("Local: %s\n", palestra.local);
		printf("Minicurriculo: %s\n", palestra.curriculo);
		printf("Codigo: %d\n", palestra.codigo);
		printf("Data: %d/%d/%d\n\n", palestra.data.dia, palestra.data.mes, palestra.data.ano);
	}
	fclose(fp);
}

void cadastrar() {
	Ficha palestra;
	char resposta[8];
	FILE *fp = fopen("cadastroPalestra.bin", "ab");
	
	if (fp == NULL) {
		printf("Erro ao criar ou abrir arquivo.");
	}
	
	printf("Deseja cadastrar Palestra? (Sim/Nao): "); fflush(stdin);
	gets(resposta);
	
	while (stricmp(resposta, "sim") == 0){
		printf("Nome da palestra: ");
		fgets(palestra.nome, sizeof(palestra.nome), stdin);
		
		printf("Palestrante: ");
		fgets(palestra.palestrante, sizeof(palestra.palestrante), stdin);
		
		printf("Local: ");
		fgets(palestra.local, sizeof(palestra.local), stdin);
		
		printf("Minicurriculo: ");
		fgets(palestra.curriculo, sizeof(palestra.curriculo), stdin);
		
		printf("Codigo: ");
		scanf("%d", &palestra.codigo);
		
		printf("Dia: ");
		scanf("%d", &palestra.data.dia);
		
		printf("Mes: ");
		scanf("%d", &palestra.data.mes);
		
		printf("Ano: ");
		scanf("%d", &palestra.data.ano);
		
		fwrite(&palestra, sizeof(Ficha), 1, fp);
		printf("Dados cadastrados com sucesso.\n");
		
		printf("Deseja cadastrar nova palestra? (Sim/Nao): "); fflush(stdin);
		gets(resposta);
	}
	fclose(fp);
	mostrar();
}

int main() {
	cadastrar();
}
