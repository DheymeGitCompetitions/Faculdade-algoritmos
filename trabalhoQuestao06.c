#include <stdio.h>
#include <stdlib.h>


int main (int argc, char** argv) {
	
	
	int *A;
	int *B;
	

	
	*A = 10; 
	*B = 20;
	
	printf ("O conteudo do maior: %i", *A);
	
	if (&A > &B) {
		
			printf ("Maior A ");
	} else{
		
		printf ("Maior B ");
		
	}
	
	return (EXIT_SUCCESS); 
}
