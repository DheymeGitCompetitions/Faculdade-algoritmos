#include <stdio.h>

int main ()
{

    
    /*
    
    1.	Escreva um programa que declare um inteiro, um real e um char,
	e ponteiros para inteiro, real e char. Associe as vari�veis aos ponteiros
	(use &). Modifique os valores de cada vari�vel usando os ponteiros.
	Imprima os valores das vari�veis antes e ap�s a modifica��o.
	
	*/
	
	int x = 10;
	double y = 20;
	char z = 'a';
	
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	
	printf ("Antes da modificacao:\n Valor de x = %i\n Valor de y = %f\n Valor de z = %c",
	        x, y, z);
	
	*pX = 15;
	*pY = 25;
	*pZ = 'b';
	
	printf(" \n");
	printf(" \n");
	
	printf ("Apos a modificacao:\n Valor de x = %i\n Valor de y = %f\n Valor de z = %c",
	        x, y, z);
    
    
    getchar();
    
    return 0;
}

