#include <stdio.h>
int s(int);
int main () {
	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("%d\n", s(n));
	
	return 0;
}
// Fibonacci¼Æ¦C 
int s(int n){
	if (n <= 2) {
		return n;
	}
	return s(n-1) + s(n-2);
}
