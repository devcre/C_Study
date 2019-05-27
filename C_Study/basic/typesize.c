#include <stdio.h>

int main(void){
	int sint; // size of int
	int slongint; // size of long int
	int schar; // size of char
	int sdouble; // size of double
	int sfloat; // size of float

	sint = sizeof(int);
	slongint = sizeof(long int);
	schar = sizeof(char);
	sdouble = sizeof(double);
	sfloat = sizeof(float);

	printf("int: %d, long int: %d\n", sint, slongint);
	printf("char: %d, double: %d, float: %d\n", schar, sdouble, sfloat);

	return 0;
}
