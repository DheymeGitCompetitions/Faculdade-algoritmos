#include <stdio.h>

int main () 

{


    int x = 10;
    int *ponteiro;
    ponteiro = &x;
    
    
    
    int y = 20;
    *ponteiro = y;
    
    printf ("modifiacao %i %i ", *ponteiro, y);
    
    getchar();
    
    return 0;

}
