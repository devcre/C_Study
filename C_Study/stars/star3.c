#include <stdio.h>

int main(void){
	int i, j, k;

	for(i=0;i<10;i++){
		for(j=9;j>i;j--){
			printf(" ");
		}
		for(k=0;k<2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}