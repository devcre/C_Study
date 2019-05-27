#include <stdio.h>

float cal_avg(int *ary); // calculate average score
int *swap(int val1, int val2, int *ary);
void sort_score(int *ary);


int main(){

	int cnt;
	float avg;
	int score[10]= {96, 87, 57, 25, 35, 68, 65, 72, 15, 90};

	cnt = 0;
	printf("Scores:\n");
	while(cnt<10){
		printf("%dth score: %d\n", cnt+1 ,score[cnt]);
		cnt += 1;
	}

	printf("\n");
	cnt = 0;
	sort_score(score);
	printf("Sorted Scores:\n");
	while(cnt<10){
		printf("%dth score: %d\n", cnt+1, score[cnt]);
		cnt += 1;
	}

	avg = cal_avg(score);
	printf("Average : %f\n", avg);

	return 0;
}

float cal_avg(int *ary){
	int sum = 0;
	float average;
	int i;

	for(i=0;i<10;i++){
		sum += ary[i];
	}

	average = (sum / 10) + (sum % 10);
	return average;
}

int *swap(int val1, int val2, int *ary){ // origin, relocate
	
	int temp;
	temp = ary[val1];
	ary[val1] = ary[val2];
	ary[val2] = temp;

	return ary;
}

void sort_score(int *ary){ // selection sort
	
	int i, j;
	int pointer;
	int min; // minimum score;

	for(i=0;i<10;i++){
		pointer = ary[i];

		min = i;
		for(j=i;j<10;j++){
			if(pointer > ary[j]){
				pointer = ary[j];
				min = j;
			}
		}
		ary = swap(i, min, ary);
	}
}
