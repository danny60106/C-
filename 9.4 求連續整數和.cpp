# include <stdio.h>
int main() {
	int n ;
	int sum = 0 ;
	printf("Please enter the number : ");
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		sum += i;
	}
	printf("%d \n", sum);
	return 0 ; 
}
