#include <stdio.h>
int main() {
	int i, n[5];
	for (i = 1; i <= 5; i++) {
		printf("%d: ",i);
		scanf("%d", &n[i-1]);
	} //隨機輸入5個數字
	while (1) { 			
		printf("Q: ");
		scanf("%d", &i);
		if (i == 0) {			//程式要求上是說i = 0 時結束，
			break;				//但0放在while(0)的話 下一行就printf不會執行 
		}
		printf("%d\n", n[i-1]);
	}
	return 0;
} 
