#include <stdio.h>

int main ()
{
	
	
	/*
	
	7.	An�lise o c�digo a seguir e descreva linha a linha o que ocorre e mostre o resultado final.
	
	*/
	
	
	int a = 4, b = 3 ,*p1, *p2; // Declarando varia�veis int a e b e seus respectivos valores; Declarando ponteiros e o tipo para qual iram apontar int.
	p1 = &a; // Apontando o ponteiro p1 para o endere�o de memoria da variavel a do tipo int.
	p2 = p1; // Apontando o ponteiro p2 para o endere�o que o ponteiro p1 representa.
	*p2 = *p1 + 3; // Mostrando que o valor do ponteiro p2 ser� igual a soma do ponteiro p1 mais 3.
	b = b * (*p1); // Essa linha diz que, a vari�vel b ser� igual a vari�vel b vezes o valor que tem no ponteiro p1.
	(*p2)++; // Essa linha  acrescenta 1 (um) ao valor do ponteiro p2.
	p1 = &b; // Essa linha diz que, o endere�o do ponteiro p1 ser� igual ao da vari�vel b.
	printf("%d %d %d %d \n", *p1, *p2, a, b); // Essa linha mostra um print dos valores dos ponteiros p1, p2 e das vari�veis a e b.
	// Resultado final: 21 8 8 21 (p1 = 21; p2 = 8; a = 8; b = 21;)

	
	
	getchar();
	
	return 0;
}
