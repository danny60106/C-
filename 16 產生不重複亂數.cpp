#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //�[�J�üƺبӰ��H���� 
	int i, j, n[10];
	for (i = 1; i <= 10; i++) {
		do {
			n[i-1] = rand() % 10 + 1; //�H����X 10�ӼƦr��J�}�C 
			for (j = 1; j < i; j++) { //�ˬd���e���Ʀr�O�_���� 
				if (n[i-1] == n[j-1]) { //�w�g�X�{�L 
					break;
				}
			}
		} while (j != i); //j!=i�N��Ʀr�����ƻݭ��s�A��@���Ʀr 
		printf("%d ", n[i-1]);
	}
	printf("\n");
	return 0;
}   
