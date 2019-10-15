#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
float r,a,p,pi=3.1416;

printf("Calculadora de Area y Perimetro de circunferencias\n\n");
printf("Ingrese el radio de la circunferencia: ");
scanf("%f",&r);

a=pi*pow(r,2);
p=2*pi*r;

printf("\n\nEl area de la circunferencia  es: %.3f",a);
printf("\nEl perimetro de la circunferencia es: %.3f\n\n",p);

}


