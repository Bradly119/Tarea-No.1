#include <stdio.h>
#include <stdbool.h>

int main(void){
	int x = 2, y = 80, z = 3;
	bool a, b, c, d, e;
	a = (x == 1);
	b = !(y == 80);
	c = ((x > y) || (z < 2 *x));
	d = (( y % x) > (x == 1));
	e = ((x < y) ^ (x == 2 ) || (z > 0));
	
	printf("%d %d %d %d %d", a, b, c, d, e);
}


