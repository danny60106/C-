#include <stdio.h> 
void countTo3(int);

int main () {
	countTo3(1);
	return 0;
}

void countTo3(int i) {
	if (i <= 3) {
		printf("%d\n",i);   // �o��椬�����ܷ|�ܦ��q3-1 
		countTo3(i+1);		// �{�����j  (�b�ۤv�{�����I�s�ۤv) 
	}
}  
