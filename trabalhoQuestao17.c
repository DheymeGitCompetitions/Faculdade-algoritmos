#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	
	struct pessoa
	{
		
		char nome[15];
		int idade;
		char endereco[25];
		
	};
	
	struct pessoa pessoa1;
	
	printf("Informe um nome: ");
	scanf ("%s", &pessoa1.nome);
	
	printf("Informe uma idade: ");
	scanf ("%d", &pessoa1.idade);
	
	printf("Informe um endereco: ");
	scanf ("%s", &pessoa1.endereco);
	
	
	printf("\nNome: %s", pessoa1.nome);
	printf("\nIdade: %d", pessoa1.idade);
	printf("\nEndereco: %s", pessoa1.endereco);
	
	
	return 0;
}
