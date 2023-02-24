#include <stdio.h>
int max3(int[3]);

int main() {
	int a[3] = {3, 9, 7};
	printf("Max: %d\n", max3(a));
	int b[5] = {3, 2, 1, 9, 7};
	printf("Max: %d\n", max3(b));  //僅出現最大值為前三者做比較 
	return 0;
}

int max3(int v[3]) {
	int max = v[0], i;
	for (i = 1; i < 3; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max;
}


