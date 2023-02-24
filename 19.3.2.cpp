#include <stdio.h>
int max5(int[5]);

int main() {
	int a[3] = {3, 9, 7};
	printf("Max: %d\n", max5(a));  //參數傳遞不足5，會發生未定義行為 
	int b[5] = {3, 2, 1, 9, 7};
	printf("Max: %d\n", max5(b));  
	return 0;
}

int max5(int v[5]) {
	int max = v[0], i;
	for (i = 1; i < 5; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


