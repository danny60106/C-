# include <stdio.h>
int main() {
	int a , sum = 0;
	int count = 0;
	float avg;
	printf("Please enter the numbers(quit: 0): \n");
	scanf("%d", &a);
	while(a != 0){
		sum += a;
		count ++;
		scanf("%d", &a);
	}
	avg = (float) sum / count;
	printf("The average is %f\n",avg);
	return 0 ; 
}
