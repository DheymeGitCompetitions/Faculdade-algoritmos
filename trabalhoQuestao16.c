#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
	
	struct horario 
	{
	
	    int horas;
		int minutos;
		int segundos;	
		
	};
	
	//exemplo
	struct horario agora;
	
	// ------------
	struct data
	{
		
	    int dia;
		int mes;
		int ano;	
		
	};
	
	//exemplo
	struct data hoje;
	
	// ------------
	
	struct compromisso
	{
		
		int data;
		int horario;
		char descricao[200];
		
	};
	
	//exemplo
	struct compromisso jantar;
	
	
	
	return 0;
}
