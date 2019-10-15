#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
int a,b;

printf("Numero par o impar\n");
printf("Ingrese un numero entero: ");
scanf("%d",&a);

b=a%2;

if(b==0){

    printf("\n\nEl numero introducido es par\n\n");
}
else{

    printf("\n\nEl numero introducido es impar\n\n");
}
}

