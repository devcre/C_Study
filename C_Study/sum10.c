#include <stdio.h>

// 1 ~ 10 sum
int main(){

	int i;
	int sum;

	// i = 1;
	sum = 0;

	// while(i<11){
	// 	sum += i;
	// 	i++;
	// }

	for(i=1; i<11; i++){
		sum += i;
	}

	printf("Sum: %d\n", sum);

	return 0;
}