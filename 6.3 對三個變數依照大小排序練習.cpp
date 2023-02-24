#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	
	//礶瓜罙秆ゑ耕抖ぃ璶睹 t->a, a->b, b->c, c->t
	/* 
		a <= b <= c -> ぃノ矪瞶 
		a <= c < b  -> c , b 传      (c,b) -> (b,c)
		b < a <= c  -> a , b 传 	 (b,a) -> (a,b)
		b <= c < a  -> b , c , a 传  (b,c,a) -> (a,b,c) 
		c < a <= b  -> c , a , b 传  (c,a,b) -> (a,b,c)
		c < b < a   -> c , a 传  	 (c,a) -> (a,c)
	*/
	// 单腹场だ琌璶σ納ㄢ单薄猵 
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
