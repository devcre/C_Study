#include <stdio.h>

int main(void){
	int i, j;
	int a, b ,c;
	int sp, se; //Print Space
	int ps; //print Stars
	int count;

	for(j=1;j<14;j++){
		if(j <= 7){
			sp = 7 - j;
			ps = 13 - 2 * sp;
			se = 7 - j;
		}
		else{
			count = j - 7;
			sp = count;
			ps = 13 - 2 * count;
			se = count;
		}
		for(i=0;i<3;i++){ //repaet 3times to make diamonds
			for(a=0;a<sp;a++){
				printf(" ");
			}
			for(b=0;b<ps;b++){
				printf("*");
			}
			for(c=0;c<se;c++){
				printf(" ");
			}
			if(i != 2){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}