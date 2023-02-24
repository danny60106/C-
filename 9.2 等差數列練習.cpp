# include <stdio.h>
int main() {
	int n ;
	printf("Please enter the number : ");
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i += 2) {
		printf("%d \n", i);
	}
	return 0 ; 
}
/* 
	for (int i = 1; i <= 5 ; i++) {
		int num  = 2 * i - 1;
		printf("%d", num); 
	} 
*/ 

/*
	for (int i = 1 ; i <= 10 ; i++) {
		if (i % 2 != 0){
			printf("%d", i);
		}
	}
*/
