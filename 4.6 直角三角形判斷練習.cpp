#include <stdio.h>

int main() {
	int a, b, c;
	printf("Please enter the lengths: ");
	scanf("%d %d %d", &a, &b, &c);
	if( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf("Rectangular triangle\n");
	}
	else{
		printf("Not Rectangular triangle\n");
	}
	
	return 0;
}
