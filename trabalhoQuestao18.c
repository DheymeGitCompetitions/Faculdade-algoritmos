#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	
	struct aluno
	{
	
	  //  char nome[15];
	    int matricula;
	   // char curso[25];
	    
	};
	
	struct aluno Alunos[2];
	
	int i;
	
	for (i = 0; i < 2; i++){
	  /*  printf("Iforme o nome: ");
	    scanf ("%s", Alunos[i].nome);*/
	    printf("Iforme a matricula: ");
	    scanf ("%d", Alunos[i].matricula);
	   /* printf("Iforme o curso: ");
	    scanf ("%s", Alunos[i].curso);
	    getc(stdin);
        getc(stdin); */
	}
	
	printf("\n");
	printf("\n");
	
	int j;
	
 /*	for (j = 0; j < 5; j++){
	    printf("\n Nome aluno: %s Matricula aluno: %d Curso aluno: %s ", Alunos[j].nome, Alunos[j].matricula, Alunos[j].curso);  
	} */
	
	for (j = 0; j < 2; j++){
	    printf("\n Matricula aluno: %d ", Alunos[j].matricula);  
	}
	
	
/*	printf("Iforme a matricula: ");
	scanf ("%d", Aluno.matricula);
	
	printf("Sua matricula: %d", Aluno.v2[0]);*/
	
	
	return 0;
}
