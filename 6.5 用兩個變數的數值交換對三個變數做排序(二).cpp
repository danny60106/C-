#include <stdio.h>

int main() {
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	printf("Before: %d %d %d\n", a, b, c);
	/*
		Divide & Conquer
		盢 a,b,c い程计传   跑计a
			盢 a,b ゑ耕计 跑计a  
			盢 a,c ゑ耕计 跑计a
		盢 b,c ゑ耕计 	跑计b 
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
