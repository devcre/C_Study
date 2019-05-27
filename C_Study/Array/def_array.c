#include <stdio.h>

int main(){
	int cnt;
	int a[] = {1, 2, 3};
	int b[3] = {4};
	int c[5];

	cnt = 0;
	while(cnt < 3){
		printf("array a: %d\n", a[cnt]);
		cnt += 1;
	}
	printf("\n");

	cnt = 0;
	while(cnt < 3){
		printf("array b: %d\n", b[cnt]);
		cnt += 1;
	}
	printf("\n");

	cnt = 0;
	while(cnt < 5){
		printf("array c: %d\n", c[cnt]);
		cnt += 1;
	}

	return 0;
}
