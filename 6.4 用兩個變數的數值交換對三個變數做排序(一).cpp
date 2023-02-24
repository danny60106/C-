#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	
	/* 
		(1) a <= b <= c -> ���γB�z 
		(2) a <= c < b  -> c , b ��      (c,b) -> (b,c)
		(3) b < a <= c  -> a , b �� 	 (b,a) -> (a,b)
		(4) b <= c < a  -> b , c , a ��  (b,c,a) -> (a,b,c) 
		(5) c < a <= b  -> c , a , b ��  (c,a,b) -> (a,b,c)
		(6) c < b < a   -> c , a ��  	 (c,a) -> (a,c)
	*/
	/*
		�o�{�`�@���T�إ洫���p�A(b,a)�����B(c,a)�����B(c,b)����
		�̧ǰ��洫 (b,a)->(c,a)->(c,b) 
		���p(3)(4)    (b,a)����
		���p(5)(6)    (c,a)����
		���p(2)(4)(5) (c,b)����
	*/ 

	if (b < a && a <= c || b <= c && c < a){
		t = a; 	a = b; 	b = t;
	}
	
	if (c < a && a <= b || c < b && b < a){
		t = c; 	c = a; 	a = t;
	}
	if (a <= c && c < b || b <= c && c < a || c < b && b < a){
		t = b; 	b = c; 	c = t;
	}	

	printf("After: %d %d %d\n", a, b, c);
	return 0;
}
/*  �̲�²�ƪ� 
	if (b < a) {
		t = b; b = a; a = t;
	}
	if (c < a) {
		t = c; c = a; a = t;
	}
	if (c < b) {
		t = b; b = c; c = t;
	}
*/
