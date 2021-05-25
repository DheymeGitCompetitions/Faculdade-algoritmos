#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Celcius(float celcius, int escalaConversao);
float Fahrenheit(float fahrenheit, int escalaConversao);
float Kelvin(float kelvin, int escalaConversao);

int main ()
{
    setlocale(LC_ALL, "Portugeuese");
    	
	float valorTemperatura;
	int escalaAtual, escala;
	
	printf ("Digite o valor da temperatura:" );
	scanf ("%f", &valorTemperatura);
	
	printf ("\n1 - Celcius 2 - Fahrenheit 3 - Kelvin " );
	printf ("\n Digite a escala atual:" );
	scanf ("%d", &escalaAtual);

    
    switch (escalaAtual) {
	    case 1: // Celcius
	        printf ("\nDigite a escala que deseja a conversao: ");
	        printf ("\n1 - Fahrenheit 2 - Kelvin " );
	        scanf ("%d", &escala);
	        Celcius(valorTemperatura, escala);
	       break;
	    case 2: // Fahrenheit
	        printf ("\nDigite a escala que deseja a conversao: ");
	        printf ("\n1 - Celcius 2 - Kelvin " );
	        scanf ("%d", &escala);
	        Fahrenheit(valorTemperatura, escala);
	       break;
		case 3: // Kelvin
	        printf ("\nDigite a escala que deseja a conversao: ");
	        printf ("\n1 - Fahrenheit 2 - Celcius " );
	        scanf ("%d", &escala);
	        Kelvin(valorTemperatura, escala);
	       break;    
	
		default:
		    break;
}
    

	getchar();
	
	return 0;
}


// Celcius
float Celcius(float celcius, int escalaConversao){
	float result;
	if (escalaConversao == 1) {
	
        result = celcius*(1.8) + 32;
		printf ("\n %.2f graus Celcius equivale a %.2f graus fahrenheit", celcius, result);

    }else if(escalaConversao == 2){

         result = celcius + 273.15;
        printf ("\n %.2f graus Celcius equivale a %.2f graus Kelvin", celcius, result);

    }
    
    return result;	
}

// Fahrenheit

float Fahrenheit(float fahrenheit, int escalaConversao){
	float result;
	if (escalaConversao == 1) {
	
        result = (fahrenheit - 32) / 1.8;
		printf ("\n %.2f graus  fahrenheit equivale a %.2f graus celcius", fahrenheit, result);

    }else if(escalaConversao == 2){

         result = (fahrenheit - 32) * 5/9 + 273.15;
        printf ("\n %.2f graus fahrenheit equivale a %.2f graus Kelvin", fahrenheit, result);

    }
    
    return result;	
}

// Kelvin

float Kelvin(float kelvin, int escalaConversao){
	float result;
	if (escalaConversao == 2) {
	
        result = kelvin - 273.15;
		printf ("\n %.2f graus  kelvin equivale a %.2f graus celcius", kelvin, result);

    }else if(escalaConversao == 1){
         //(0 K - 273,15) × 9/5 + 32
         result = 1.8*(kelvin - 273) + 32;
         printf("ENTREIII");
        printf ("\n %.2f graus kelvin equivale a %.2f graus fahrenheit", kelvin, result);

    }
    
    return result;	
}




