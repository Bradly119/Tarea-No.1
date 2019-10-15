#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    int max, min, med = 0, n, i, e = 0;
    float v;
    
    printf("Valor maximo, minimo y media\n");
    printf("Ingrese 10 numeros enteros:\n");
    
    for(i = 1; i < 11; i++){
        
        printf("\nIngrese num %d: ",i);
        scanf("%d", &n);
        med += n;
        
        if(e == 0){
        	max = n;
        	min = n;
        	e = 1;
		}
		else{
	        if(n >= max){
	            max = n;
	        }
	        if(n < min){
	            min = n;
	        }
		}
    }
    
    v = med / 10;
    
    printf("\n\nEl valor maximo es: %d", max);
    printf("\nEl valor minimo es: %d", min);    
    printf("\nLa media es: %0.2f", v); 
}




