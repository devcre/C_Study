#include <stdio.h>

int main(void){
	double celsius;

	printf("program that convert Celsius temperature to Fahrenheit temperature.\n");
	printf("Please enter the temperature: ");
	scanf("%lf", &celsius);

	printf("%f degree Celsius is %f degree Fahrenheit.\n", celsius, 9*celsius/5+32);

	return 0;
}
