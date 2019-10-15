#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	
	int x = 2, z;
	
	if(3 != x ){
		if(1 == x){
			z = 1;
		}
		else{
			z = x;
		}
	}
	else{
		z = 0;
	}
	printf("%d",z);
}


