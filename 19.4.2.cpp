#include <stdio.h>
void f(int[3]);

int main() {
	int v[3] = {1, 2, 3};
	f(v);
	return 0;
}

void f(int v[3]) {
	printf("Size of int: %zu\n", sizeof(int)); 
	printf("Size of v[0]: %zu\n", sizeof(v[0]));
	printf("Size of v: %zu\n", sizeof(v));  
	//�bC�y�����A�ѩ�N�}�C�ƻs���N�������A�G�ϥΫ��Ы��Ӷǻ��}�C���ѼơA�z�L�O�����}�ӭp��禡 
	printf("Length of v: %zu\n", sizeof(v) / sizeof(v[0]));
}