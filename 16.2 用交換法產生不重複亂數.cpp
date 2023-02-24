#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //加入亂數種來做隨機數 
	int i, n[10];
	for (i = 1; i <= 10; i ++) {  //先將1-10都分配給陣列元素 
		n[i-1] = i;
	}
	for (i = 1; i <= 10; i++) {
		int j = rand() % (11-i) + i; // 數字選過後，會剩餘總數量-1
		int t = n[i-1];
		n[i-1] = n[j-1];
		n[j-1] = t;
		printf("%d ", n[i-1]);
	}
	printf("\n");
	return 0;
}   
