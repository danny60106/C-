#include <stdio.h>

int main() {
	int i, n[10], avg;
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	}
	int max = n[0];
	for (i = 1; i < 10; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	int sum = n[0];
	for (i = 1; i < 10; i++) {
		sum += n[i];
	}
	avg = sum / 10;
	printf("Max: %d\n", max);
	printf("Avg: %d\n", avg);
	return 0;
} 
