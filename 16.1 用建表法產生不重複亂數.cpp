#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //�[�J�üƺبӰ��H���� 
	int i, n, counter[10] = {0};
	for (i = 1; i <= 10; i++) {
		do {
			n = rand() % 10 + 1; 
		} while (counter[n-1] != 0); //�z�L�p�ƾ����覡�ӭp��ӼƦr�O�_���� 
		printf("%d ", n);
		counter[n-1]++;
	}
	printf("\n");
	return 0;
}   
