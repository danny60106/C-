#include <stdio.h>
int max5(int[5]);

int main() {
	int a[3] = {3, 9, 7};
	printf("Max: %d\n", max5(a));  //�Ѽƶǻ�����5�A�|�o�ͥ��w�q�欰 
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


