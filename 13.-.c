#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
    
    int num, pri, i, m, d;
        
    printf("Numero primo\n");
    printf("Ingrese un numero entero para determinar si es un numero primo: ");
    scanf("%d", &num);
    
    for(i = (num - 1); i > 1; i--){
        
        m = num % i;
        d = num / i;
        
        if(d > 0 && m == 0){
            pri = 1;
        }
    }
    
    if(pri == 1){
        printf("\n\nEl numero %d no es primo", num);
    }
    else{
        printf("\n\nEl numero %d es primo", num);
    }
}


