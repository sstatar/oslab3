#include <stdio.h>
int main() {

	int number = 1,count;
	float avg;
	int sum = 0;


	while (number > 0){
		
		printf("enter a number : ");
		scanf("%d" ,&number);
		if(number<=0){
			break;
		}

		count++;
		sum += number;

	}

	avg = (float)sum/count;
	
	printf("sum = %d\n",sum);
	printf("average = %f\n",avg);
} 
