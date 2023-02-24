# include <stdio.h>
int main() {
	int n ;
	printf("Please enter the number : ");
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i ++) {
		if(i % 3 != 0 && i % 2 == 0) 
			printf("%d \n", i);
	}
	return 0 ; 
}
