#include <stdio.h>
#include <stdlib.h>
#include <time.h>     

int main() {
	srand(time(0)); 
	int i;
	for (i = 1; i <= 5; i ++) {
		int dice = rand() % 6 + 1 ; //�D�l�ƪ������A�|�ѤU 0-5 
		printf("%d\n",dice);   
	}
	return 0;
}
//�ϥγo�Ӥ覡�U�I�ƪ����v�|���P 

