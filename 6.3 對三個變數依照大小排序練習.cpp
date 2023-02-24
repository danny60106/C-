#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	
	//�e���A�Ѥ���n�A���Ǥ��n�� t->a, a->b, b->c, c->t
	/* 
		a <= b <= c -> ���γB�z 
		a <= c < b  -> c , b ��      (c,b) -> (b,c)
		b < a <= c  -> a , b �� 	 (b,a) -> (a,b)
		b <= c < a  -> b , c , a ��  (b,c,a) -> (a,b,c) 
		c < a <= b  -> c , a , b ��  (c,a,b) -> (a,b,c)
		c < b < a   -> c , a ��  	 (c,a) -> (a,c)
	*/
	// �����������O�n�Ҽ{��̬۵������p 
	if (a <= c && c < b){
		t = b; 
		b = c; 
		c = t;
	}
	if (b < a && a <= c){
		t = a; 
		a = b; 
		b = t;
	}
	if (b <= c && c < a){
		t = b; 
		b = c; 
		c = a; 
		a = t; 
	}
	if (c < a && a <= b){
		t = c; 
		c = b; 
		b = a; 
		a = t;
	}
	if (c < b && b < a){
		t = c; 
		c = a; 
		a = t;
	}	
	printf("After: %d %d %d\n", a, b, c);
	return 0;
}
