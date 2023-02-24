#include <stdio.h>
int main() {
	int n , i, j;
	printf("N = ");
	scanf("%d",&n);
	for (i = 1 ; i <= n ; i++){
		for (j = 1 ; j <= n; j++){
			if (i==1 || i == n || j == 1 || j == n){
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
/*
	for (j = 1; j <= n ; j++){
		printf("*");
	}
	printf("\n");
	
	for (i = 1; i <= n-2; i++) {
		printf("*");
		for (j = 1; j <= n-2; j++) {
			printf(" ");
		}
		printf("*\n");
	}
	
	for (j = 1; j <= n ; j++) {
		printf("*");
	}
	printf("\n");
*/
