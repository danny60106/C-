#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	
	/* 
		(1) a <= b <= c -> ぃノ矪瞶 
		(2) a <= c < b  -> c , b 传      (c,b) -> (b,c)
		(3) b < a <= c  -> a , b 传 	 (b,a) -> (a,b)
		(4) b <= c < a  -> b , c , a 传  (b,c,a) -> (a,b,c) 
		(5) c < a <= b  -> c , a , b 传  (c,a,b) -> (a,b,c)
		(6) c < b < a   -> c , a 传  	 (c,a) -> (a,c)
	*/
	/*
		祇瞷羆Τ贺ユ传薄猵(b,a)が传(c,a)が传(c,b)が传
		ㄌ暗ユ传 (b,a)->(c,a)->(c,b) 
		猵(3)(4)    (b,a)が传
		猵(5)(6)    (c,a)が传
		猵(2)(4)(5) (c,b)が传
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
/*  程沧虏て 
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
