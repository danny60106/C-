#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	/*
		Divide & Conquer
		�N a,b,c ���̤p���ƭȴ���   �ܼ�a
			�N a,b ����p���ƭȩ�� �ܼ�a  
			�N a,c ����p���ƭȩ�� �ܼ�a
		�N b,c ����p���ƭȩ�� 	�ܼ�b 
	*/ 
	if (b < a) {
		t = b; b = a; a = t;
	}
	if (c < a) {
		t = c; c = a; a = t;
	}
	if (c < b) {
		t = b; b = c; c = t;
	}	

	printf("After: %d %d %d\n", a, b, c);
	return 0;
}
