#include <stdio.h>

int main(void){
	int i, j, k;
	int a, b, c;

	for(i=0;i<10;i++){
		for(j=9;j>i;j--){
			printf(" ");
		}
		for(k=0;k<2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}
	for(a=9;a>0;a--){
		for(c=10;c>a;c--){
			printf(" ");
		}
		for(b=0;b<2*a-1;b++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
