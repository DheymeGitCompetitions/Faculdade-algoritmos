#include <stdio.h>
#include <stdlib.h>


int main (int argc, char** argv) {
	
	
	int *A;
	int *B;
	
	
	if (&A > &B) {
		printf ("%d e maior que %d", &A, &B);
	} else{
		printf ("%d e maior que %d", &B, &A);
	}
	
	return (EXIT_SUCCESS); 
}
