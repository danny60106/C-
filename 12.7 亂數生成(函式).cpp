#include <stdio.h>
#include <stdlib.h>
#include <time.h>       //���o�t�ήɶ���time�禡 
int main() {
	srand(time(0));     //�@�ӵ{���u�ݭn�I�s�@��srand (�üƺ�seed rand) 
	int i ;
	for (i = 1; i <= 5; i ++) {
		printf("%d\n",rand());    //�C���I�srand�禡�|�^�Ǥ@���H���ü� 
	}
	return 0;
}




