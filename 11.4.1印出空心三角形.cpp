#include <stdio.h>
int main() {
	int n ;
	printf("N = ");
	scanf("%d",&n);
	printf("*\n");   //�L�@�ӬP�P �[���� 
	for (int i = 0 ; i <= n-3 ; i++){  
		printf("*");					//�L�@�ӬP�P 
		for (int j = 1 ; j <= i; j++){  //�Li�Ӫť� 
			printf(" ");
		}
		printf("*\n");					//�L1�ӬP�P+���� 
	}
	for (int a = 1; a<=n; a++) {		//�Ln�ӬP�P 
		printf("*");
	}
	return 0;
}
