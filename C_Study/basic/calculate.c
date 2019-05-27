#include <stdio.h>

int main(){
	int a, b, c, d;
	int value;

	a = 7;
	b = 16;
	c = 20;
	d = 5;
	value = a + b - c / d;

	printf("%d + %d - %d / %d = %d\n", a, b, c, d, value);
	return 0;
}
