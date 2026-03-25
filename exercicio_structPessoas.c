/*Definir uma struct cuja representação gráfica é dada a seguir, definir os campos com os tipos necessários:
Cadastro: Nome, Endereço, Salário, RG, CPF, Estado Civil, Telefone, Idade e Sexo.
Endereço é composto por: Rua, Bairro, Cidade, Estado e CEP.
a) Criar um vetor de 5 elementos.
b) Permitir que o usuário informe os 5 elementos (cadastros)
c) Exibir a pessoa com a maior idade
d) Listar as pessoas de sexo masculino
e) Buscar pessoa pelo seu RG e exibir seu nome e telefone.
*/

#include <stdio.h>
#include <string.h>
#define TF 5

typedef struct {
	char rua[50], bairro[50], cidade[50], estado[50], cep[15];
} cadastro;

typedef struct {
	char nome[50], rg[15], cpf[20], estadoCivil[20], sexo[15]; 
	cadastro endereco;
	float salario;	
	int idade, telefone;
} ficha;

void maiorIdade(ficha pessoa[]) {
	int i, maiorIdade=0;
	char nomePessoa[50];
	
	for (i = 0; i < TF; i++) {
		if(pessoa[i].idade > maiorIdade) {
			maiorIdade = pessoa[i].idade;
			strcpy(nomePessoa, pessoa[i].nome);
		}
	}
	
	printf("\nA pessoa mais velha e %s, com %d anos de idade.", nomePessoa, maiorIdade);
}

void listarMasculino(ficha pessoa[]) {
	int i;
	char busca[15] = "Masculino";
	
	printf("\nPessoas do sexo masculino: ");
	for (i = 0; i < TF; i++) {
		if (stricmp(busca, pessoa[i].sexo) == 0){
			printf("\n%s", pessoa[i].nome);
		}
	}
}

void buscarRG(ficha pessoa[]){
	/*char buscaRG[15];
	int posicao = 0;
	
	printf("\nDigite o RG da pessoa que deseja procurar: ");
	fflush(stdin);
	gets(buscaRG);
	
	while (stricmp(buscaRG, pessoa[posicao].rg) != 0 && posicao < TF)
		posicao++;
	if (posicao < TF) {
		printf("\nPessoa encontrada.");
		printf("\nNome: %s", pessoa[posicao].nome);
		printf("\nTelefone: %d", pessoa[posicao].telefone);
	}
	else
		printf("\nPessoa nao encontrada."); */
		
	int i, achou = 0;
	char buscaRG[15];
	
	printf("\nDigite o RG da pessoa que deseja procurar: ");
	fflush(stdin);
	gets(buscaRG);
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaRG, pessoa[i].rg) == 0) {
			printf("\nPessoa encontrada.");
			printf("\nNome: %s", pessoa[i].nome);
			printf("\nTelefone: %d", pessoa[i].telefone);
			achou++;
		}
	}
	if (achou == 0)
		printf("\nPessoa nao encontrada.");
	
}


int main() {
	ficha pessoa[TF];
	int i;
	
	for (i = 0; i < TF; i++) {
		printf("\nDigite o nome da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].nome);
		
		printf("\nDigite a rua onde a pessoa mora: ");
		fflush(stdin);
		gets(pessoa[i].endereco.rua);
		
		printf("\nDigite o bairro onde a pessoa mora: ");
		fflush(stdin);
		gets(pessoa[i].endereco.bairro);
		
		printf("\nDigite a cidade onde a pessoa mora: ");
		fflush(stdin);
		gets(pessoa[i].endereco.cidade);
		
		printf("\nDigite o estado onde a pessoa mora: ");
		fflush(stdin);
		gets(pessoa[i].endereco.estado);
		
		printf("\nDigite o CEP da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].endereco.cep);
		
		printf("\nDigite o RG da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].rg);
		
		printf("\nDigite o CPF da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].cpf);
		
		printf("\nDigite o estado civil da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].estadoCivil);
		
		printf("\nDigite o sexo da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].sexo);
		
		printf("\nDigite o salario da pessoa: ");
		scanf("%f", &pessoa[i].salario);
		
		printf("\nDigite a idade da pessoa: ");
		scanf("%d", &pessoa[i].idade);
		
		printf("\nDigite o telefone da pessoa: ");
		scanf("%d", &pessoa[i].telefone);
	}
	
	maiorIdade(pessoa);
	listarMasculino(pessoa);
	buscarRG(pessoa);
}

