#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    int indicador;
    
    printf("Ingrese un valor entre el 1 y 4: ");
    scanf("%d", &indicador);
    
    switch (indicador){
        case 1:
            printf("\nCalor\n");
        break;
        case 2:
            printf("\nTemplado\n");
        break;
        case 3:
            printf("\nFrio\n");
        break;       
        case 4:
            printf("\nFuera de rango\n");
        break;        
        default:
            printf("\nError\n");
    }
   
}
