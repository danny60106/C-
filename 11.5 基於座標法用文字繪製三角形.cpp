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
	
	// 實心三角形 
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
	
	// 空心三角形 
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
	
	// 倒實心三角形 
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i +j >= n+1) {    //可以發現 中間斜線左下往右上的部分 都是n+1的值 左邊小於n+1 右邊大於n+1 
				printf("*");
			} else {
				printf(" ");
			}
		} 
		printf("\n");
	}
	printf("\n");
	
	// 倒空心三角形 
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
