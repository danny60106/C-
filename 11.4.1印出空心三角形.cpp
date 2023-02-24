#include <stdio.h>
int main() {
	int n ;
	printf("N = ");
	scanf("%d",&n);
	printf("*\n");   //印一個星星 加換行 
	for (int i = 0 ; i <= n-3 ; i++){  
		printf("*");					//印一個星星 
		for (int j = 1 ; j <= i; j++){  //印i個空白 
			printf(" ");
		}
		printf("*\n");					//印1個星星+換行 
	}
	for (int a = 1; a<=n; a++) {		//印n個星星 
		printf("*");
	}
	return 0;
}
