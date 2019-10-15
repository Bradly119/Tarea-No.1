#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    float g, t;
    int min = 200, pri = 10, seg = 20;
    
    printf("Calculo de factura mensual de agua\n");
    printf("Ingrese la cantidad de agua en litros ocupada durante el mes pasado: ");
    scanf("%f",&g);
    
    if(g > 0 && g <= 50){
        t = min;
    }
    else{
        if(g > 50 && g <= 200){
            t = g * pri;
        }
        else{
            t = g * seg;
        }  
    }
    
    printf("\n\nEl valor de la factura del mes pasado del gasto de agua es: $%.2f\n",t);
    
}



