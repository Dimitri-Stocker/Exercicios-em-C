/* Crie structs para armazenar os dados de um funcionário de uma empresa com as seguintes informações:
Nome, Idade, Sexo(representado por um caractere, 'M' ou 'F'), CPF(armazenado em string), Cargo que ocupa, Salário, Data de Nascimento e Còdigo do Setor onde trabalha.
Você pode definir quantas estruturas achar necessário.
Seu programa deve criar um vetor de 15 funcionários.
Em seguida, o usuário deve entrar com as informações para preencher esse vetor.
Seu programa deve imprimir por meio de função os registros dos funcionários e finalmente realizar uma busca por CPF, exibindo os dados do funcionário encontrado.
*/

#include <stdio.h>
#include <string.h>
#define TF 15

typedef struct{
	char nome[50], sexo, cpf[20], cargo[50], dataNascimento[15];
	int idade, codigoSetor;
	float salario;
} ficha;

void exibirDados(ficha funcionario[]) {
	int i;
	
	printf("\nDADOS DO FUNCIONARIO:");
	for (i = 0; i < TF; i++) {
		printf("\nNome: %s", funcionario[i].nome);
		printf("\nSexo: %c", funcionario[i].sexo);
		printf("\nIdade: %d", funcionario[i].idade);
		printf("\nCPF: %s", funcionario[i].cpf);
		printf("\nCargo: %s", funcionario[i].cargo);
		printf("\nSalario: %.2f", funcionario[i].salario);
		printf("\nData de Nascimento: %s", funcionario[i].dataNascimento);
		printf("\nCodigo do setor: %d", funcionario[i].codigoSetor);
	}
}

void buscarFuncionario(char cpfBusca[], ficha funcionario[]) {
	int i, achou = 0;
	
	for (i = 0; i < TF; i++) {
		if (stricmp(cpfBusca, funcionario[i].cpf) == 0) {
			printf("\nFuncionario encontrado.");
			printf("\nNome: %s", funcionario[i].nome);
			printf("\nSexo: %c", funcionario[i].sexo);
			printf("\nIdade: %d", funcionario[i].idade);
			printf("\nCPF: %s", funcionario[i].cpf);
			printf("\nCargo: %s", funcionario[i].cargo);
			printf("\nSalario: %.2f", funcionario[i].salario);
			printf("\nData de Nascimento: %s", funcionario[i].dataNascimento);
			printf("\nCodigo do setor: %d", funcionario[i].codigoSetor);
			achou++;
		}
	}
	if (achou == 0) 
		printf("\nFuncionario nao encontrado.");
		
}

int main() {
	ficha funcionario[TF];
	int i;
	char cpfBusca[20];
	
	for (i = 0; i < TF; i++) {
		printf("Insira o nome do funcionario: ");
		fflush(stdin);
		gets(funcionario[i].nome);
		
		printf("\nInsira o sexo do funcionario (M ou F): ");
		fflush(stdin);
		scanf("%c", &funcionario[i].sexo);
		
		printf("\nInsira a idade do funcionario: ");
		scanf("%d", &funcionario[i].idade);
		
		printf("\nInsira o CPF do funcionario: ");
		fflush(stdin);
		gets(funcionario[i].cpf);
		
		printf("\nInsira o cargo do funcionario: ");
		fflush(stdin);
		gets(funcionario[i].cargo);
		
		printf("\nInsira o salario do funcionario: ");
		scanf("%f", &funcionario[i].salario);
		
		printf("\nInsira a data de nascimento do funcionario (Ex: 22.03.1994): ");
		fflush(stdin);
		gets(funcionario[i].dataNascimento);
		
		printf("\nInsira o codigo do setor onde o funcionario trabalha: ");
		scanf("%d", &funcionario[i].codigoSetor);
	}
	
	exibirDados(funcionario);
	
	printf("\nDigite o CPF do funcionario que deseja encontrar: ");
	fflush(stdin);
	gets(cpfBusca);
	
	buscarFuncionario(cpfBusca, funcionario);
}
