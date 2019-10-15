#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    char color;
    
    printf("Ingrese una letra mayuscula o minuscula: ");
    scanf("%c", &color);
    
    switch (color){
        case 'v':
        case 'V':
            printf("\nVerde\n");
        break;  
        case 'a':
        case 'A':
            printf("\nAzul\n");
        break; 
        case 'r':
        case 'R':
            printf("\nRojo\n");
        break; 
        default:
            printf("\nNegro\n");
    }
   
}


