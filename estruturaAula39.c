#include <stdio.h>

int main ()
{
	
	
	
	struct horario
	{
	
	    int horas;
	    int minutos;
	    int segundos;
	};
	
	// tipo de dado horario
	struct horario agora;
	
	agora.horas = 15;
	agora.minutos = 17;
	agora.segundos = 20;
	
	printf ("%i:%i:%i ", agora.horas, agora.minutos, agora.segundos);
	
	
	
	getchar();
	return 0;
}
