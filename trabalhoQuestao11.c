/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: TheDheyme
 *
 * Created on 12 de abril de 2021, 20:16
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   
    int maior, menor, num;
    
    printf("Numero 1:");
    scanf("%d", &num);
    maior = num;
    menor = num;
    
    int count = 2;
    
    while (count <= 3){
    
        printf("Numero %d:", count);
        scanf("%d", &num);
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
        
        count++;
    }
    
    printf("Dos tres numeros o maior foi %d\n", maior);
    printf("Dos tres numeros o menor foi %d\n", menor);
    
     
    return (EXIT_SUCCESS);
}


