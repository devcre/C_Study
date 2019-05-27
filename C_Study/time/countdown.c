#include <stdio.h>
#include <time.h>

int countdown(int n);

int main(){
	countdown(10);
}

int countdown(int n){
	if(n > 0){
		printf("%d\n", n);
		sleep(1);
		countdown(n-1);
	}
	else{
		printf("Fire!\n");
	}
}
