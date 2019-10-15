#include <stdio.h>
#include <stdbool.h>

int main(void){
	int n = 2, m = 5;
	bool a, b, c, d;
	a = ((n + m) == 2);
	b = ((n > m) == !(m == 5));
	c = ((m % n) > 5);
	d = (((m - n)*10)%4 == 1);
	
	printf("%d %d %d %d", a, b, c, d);
}



