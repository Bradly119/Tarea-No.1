#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(void){
    
    int i, n;
    float sum, s;
    
    printf("Sumatoria\n");
    printf("Ingrese un numero hasta el que quiera sumar: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        s = (pow(i,2) + 1)/i;
        sum += s;
    }
    
    printf("\n\nEl resultado de la sumatoria es: %.3f\n", sum); 
}


