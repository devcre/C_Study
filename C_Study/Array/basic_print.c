#include <stdio.h>

int main(){
	int count;
	int arr[10] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 101};

	count = 1;
	while(count<11){
	    printf("Array, %dth element : %d\n", count, arr[count-1]);
		count += 1;
	}
	return 0;
}
