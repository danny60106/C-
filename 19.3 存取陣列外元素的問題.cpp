#include <stdio.h>
int main() {
	int v[3] = {1, 2, 3};
	printf("%d\n", v[0]);
	printf("%d\n", v[2]);
	printf("%d\n", v[3/2]); //v[1]
	
	printf("%d\n", v[0.5);   //�sĶ���~ 
	printf("%d\n", v[3/2.]); //�sĶ���~ 
	
	printf("%d\n", v[3]); //���w�q�欰�A�]��v[i]�̦h��2�A���{�����|����C
	printf("%d\n", v[4]);
	printf("%d\n", v[-1]);
	return 0;
} 


