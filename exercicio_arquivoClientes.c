/* Definir uma estrutura para cliente que contenha os campos:
Data de nascimento (dia, mês e ano), Nome, CPF, Email e Telefone.
O programa deve permitir cadastrar quantos clientes o usuário desejar.
Após realizar os cadastros, listar os registros inseridos no arquivo.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
}Data;

typedef struct{
	Data data;
	char nome[50], cpf[20], email[50], telefone[20];
}Cadastro;

void mostrarClientes();

void cadastrarCliente() {
	Cadastro cliente;
	char resposta[8];
	FILE *fp = fopen("cadastroClientes.bin", "ab");
	
	if (fp == NULL) {
		printf("Erro ao abrir ou criar arquivo.");
	}
		
	printf("Deseja cadastrar cliente? (Sim/Nao): "); fflush(stdin);
	gets(resposta);
	
	while(stricmp(resposta, "sim") == 0) {
		printf("Nome do cliente: "); 
		fgets(cliente.nome, sizeof(cliente.nome), stdin);
		
		printf("CPF do cliente: ");
		fgets(cliente.cpf, sizeof(cliente.cpf), stdin);
		
		printf("Email do cliente: ");
		fgets(cliente.email, sizeof(cliente.email),stdin);
		
		printf("Telefone: ");
		fgets(cliente.telefone, sizeof(cliente.telefone), stdin);
		
		printf("Dia de nascimento: ");
		scanf("%d", &cliente.data.dia);
		
		printf("Mes de nascimento: ");
		scanf("%d", &cliente.data.mes);
		
		printf("Ano de nascimento: ");
		scanf("%d", &cliente.data.ano);
		
		fwrite(&cliente, sizeof(Cadastro), 1, fp);
		printf("Dados registrados com sucesso.\n");
		
		printf("Deseja cadastrar novo cliente? (Sim/Nao): ");fflush(stdin);
		gets(resposta);
	}
	fclose(fp);
	mostrarClientes();
}

void mostrarClientes() {
	Cadastro cliente;
	FILE *fp = fopen("cadastroClientes.bin", "rb");
	if (fp == NULL) {
		printf("Erro ao ler arquivo.");
	}
	
	while (fread(&cliente, sizeof(Cadastro), 1, fp) == 1) {
		printf("Nome: %s\n", cliente.nome);
		printf("CPF: %s\n", cliente.cpf);
		printf("Email: %s\n", cliente.email);
		printf("Telefone: %s\n", cliente.telefone);
		printf("Data de nascimento: %d/%d/%d\n\n", cliente.data.dia, cliente.data.mes, cliente.data.ano);
	}
	fclose(fp);
}

int main() {
	cadastrarCliente();	
}
