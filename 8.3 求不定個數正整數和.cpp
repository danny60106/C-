# include <stdio.h>
int main() {
	int a , sum = 0;
	printf("Please enter the numbers(quit: 0): \n");
	scanf("%d", &a);
	while(a != 0){
		sum += a;
		scanf("%d", &a);
	}
	printf("The sum is %d\n",sum);
	return 0 ; 
}
