#include <stdio.h>
int main() {
	int i, j, n;
	printf("N = ");
	scanf("%d", &n);
	
	for (i=1; i <= n ; i++) {
		for (j = 1; j <= n; j ++) {
			printf("(%d,%d)",i,j);
		} 
		printf("\n");
	}
	printf("\n");
	
	// ��ߤT���� 
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			if (i >= j) { 
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
	printf("\n");
	
	// �ŤߤT���� 
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			if (j == 1 || i == n || j == i) { 
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
	printf("\n");
	
	// �˹�ߤT���� 
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i +j >= n+1) {    //�i�H�o�{ �����׽u���U���k�W������ ���On+1���� ����p��n+1 �k��j��n+1 
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
	printf("\n");
	
	// �˪ŤߤT���� 
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (j == n || i == n || j+i == n+1) { 
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
