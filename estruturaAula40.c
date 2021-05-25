#include <stdio.h>

int main ()
{
	
	struct horario
	{
	
	    int horas;
	    int minutos;
	    int segundos;
	    double teste;
	    char letra;
		
	};
	
	struct horario agora;
	
	agora.horas = 19;
	agora.minutos = 55;
	agora.segundos = 20;
	
	
	struct horario depois;
	
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.teste = 50.55 / 123;
	depois.letra = 'a';
	
	
	printf ("%i:%i:%f, %c ", depois.horas, depois.minutos, depois.teste, depois.letra);
	
	
	getchar();
	return 0;
}
