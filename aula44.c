#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	
	struct horario 
	{
	 	int horas;
		int minutos;
		int segundos; 
		
		char nome[15];
		int  matricula;
		char curso[15];
		
		
	};
	
	struct horario teste[1];
	
	char vetor[2] = 
	{'d','h'};
	
  /*  printf ("Informe um nome");
    scanf ("%s", &vetor);*/
  
  printf ("\nPosicao0 %s, posicao1", vetor[0], vetor[1]);
  
  int i;
  
  for (i = 0;i < 15; i++){
  	printf ("'%s", vetor[i]);
  }
  
  	
  //teste[0].nome = ;
 // teste[0].matricula = 11;
  //teste[0].segundos = 12;
  
  printf ("nome: %s", vetor);
	
	/*printf ("%i: %i: %i", teste[0].horas,
	                      teste[0].minutos,
						  teste[0].segundos);


	printf ("%i: %i: %i", teste[1].horas,
                          teste[1].minutos,
					      teste[1].segundos); 	
						  
   int i;
   for (i = 0; i < 2; i++){
   	    printf ("%i: %i: %i - ", teste[i].horas,
		                      teste[i].minutos,
						      teste[i].segundos);
   }*/						  					  
    						
	//,{11,30,40}  {{10,20,30},{11,30,40}}
	
	return 0;
}
