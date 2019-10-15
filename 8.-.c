#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){

	float efectivo, entrada;
    int dinero;
    int b1000, b500, b200, b100, b50, b20, m10, m5, m2, m1, mc,val;

    printf("Billetes y monedas minimas de una cantidad\n");
    printf("Ingrese una cantidad: ");
    scanf("%f", &efectivo);
    
    entrada= efectivo*2;
    val = entrada - (efectivo - 0.5);
    
    if((val-efectivo) == 0){
		dinero = efectivo;
		mc = 0;
	}
	else{
    dinero = efectivo - 0.5;
    mc = 1;
	}
	
    b1000 = dinero/1000;
    b500 = (dinero%1000)/500;
    b200 = (dinero%500)/200;
	b100 = ((dinero%500)-(b200*200))/100;
    b50 = (dinero%100)/50;
    b20 = (dinero%50)/20;
    m10 = ((dinero%50)-(b20*20))/10;
    m5 = (dinero%10)/5;
    m2 = (dinero%5)/2;
	m1 = (dinero%5)-(m2*2);

    printf("\n\nLa cantidad introducida expresada en billetes y monedas es:\n\n");

    printf("%d billetes de 1000\n",b1000);
    printf("%d billetes de 500\n",b500);
    printf("%d billetes de 200\n",b200);
    printf("%d billetes de 100\n",b100);
    printf("%d billetes de 50\n",b50);
    printf("%d billetes de 20\n",b20);
    printf("%d monedas de 10\n",m10);
    printf("%d monedas de 5\n",m5);
    printf("%d monedas de 2\n",m2);
    printf("%d monedas de 1\n",m1);
    printf("%d monedas de 0.5\n",mc);
}
