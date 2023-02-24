#include <stdio.h>

int main() {
	int i, j, n, b[10] = {0};
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n); // 隨機輸入10個數字 
		b[(n-1)/10]++ ;  // 分類數字的區間，IF n = 20, b[9]++。 
	}
	printf("----------------\n");
	for (i = 1; i <= 10; i++) {
		printf("%3d: ",i*10);
		for (j = 1; j <= b[i-1]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
