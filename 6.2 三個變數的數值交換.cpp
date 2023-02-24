#include <stdio.h>

int main() {
	int a = 2, b = 7, c = 9, t;
	printf("Before: %d %d %d\n ", a, b, c);
	
	t = a;
	a = c;
	c = b;
	b = t;
	
	printf("After: %d %d %d\n ", a, b, c);
	return 0;  
}
/*
	A B C -> C A B 
*/

/* ¤èªk¤G 
int a = 2, b = 7, c = 9, t;
	printf("Before: %d %d %d\n ", a, b, c);
	
	// a c ¤¬´« 
	t = a;
	a = c;
	c = t;
	
	// b c ¤¬´«
	t = b;
	b = c;
	c = t; 
	
	printf("After: %d %d %d\n ", a, b, c);
*/ 
