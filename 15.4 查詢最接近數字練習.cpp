#include <stdio.h>
#include <stdlib.h> 
int main() {
	int i, n[10], q;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	} //隨機輸入10個數字 
	while (1) { 
		printf("Q: ");
		scanf("%d", &q);
		if (q == 0) {  //當 q = 0 時，查詢結束 
			break;
		}
		int nearest_n = n[0], nearest_d = abs(q-n[0]) ; //距離計算方式 計算查詢值q與索引值n[i]的差 
		for (i = 1; i < 10; i++) {
			int d = abs(q-n[i]);
			if (
				d < nearest_d || 
				(d == nearest_d && n[i] < nearest_n)) {
					nearest_d = d;
					nearest_n = n[i];	
				}
		}
		printf("%d\n", nearest_n);
	}
	return 0;
}   
