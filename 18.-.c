#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    int x = 12, j = 5, k = 0;
    
    if( 0 == (x % 4)){
    	for(j = 0; j < 10; j += 4){
    		k += j;
		}
	}
	else{
		for(j = 0; j < 10; j += 2){
    		k += j;
		}
	}
	printf("%d", k);
}



