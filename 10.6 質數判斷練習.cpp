# include <stdio.h>
int main() {
	int n , i;
	printf("Please enter a number : ");
	scanf("%d", &n);
	
	int isPrime = 1;
	
	for ( i = 2 ; i < n ; i++){
		if(n % i == 0){
			isPrime = 0;
		}
	}
	if (isPrime) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0 ; 
}
/*
	for (i = 2; i < n && n % i != 0; i++) ;
	
	if (i == n) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
*/

