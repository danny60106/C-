#include <stdio.h>

int main() {
	int v[9];
	int i;
	
	for (i = 0; i < 9; i++) {  //�N�Ʀr1-9�s�Jv�}�C 
		v[i] = i + 1;
	}
	
	for (i = 0; i < 9; i++) {
		printf("%d ",v[i]);
		if (i % 3 == 2) {
			printf("\n");
		}
	}
}
