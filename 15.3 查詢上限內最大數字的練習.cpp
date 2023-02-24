#include <stdio.h>
int main() {
	int i, n[10], q;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	} //隨機輸入10個數字
	while (1) { 
		int max_i = -1;   //代表目前陣列元素最大的索引 
		printf("Q: ");
		scanf("%d", &q);
		if (q == 0) {	
			break;				
		}
		for (i = 0; i < 10; i++) {
			if (n[i] <= q && (max_i == -1 || n[i] > n[max_i])) {
				max_i = i;
			}
		} 
		if (max_i != -1) {
			printf("%d\n", n[max_i]);
		}
	}
	return 0;
}   
