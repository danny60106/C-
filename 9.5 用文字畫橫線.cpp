# include <stdio.h>
int main() {
	int n ;
	printf("Please enter the number : ");
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		printf("*");
	}
	printf("\n");
	return 0 ; 
}
