#include <stdio.h>

int main() {
	int a, b, c;
	printf("Please enter the lengths: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a==b && b==c){
		printf("Regular triangle\n");
	}
	else if (a==b || b==c || c==a){
		printf("Isosceles triangle\n");
	} 
	else if( a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		printf("Rectangular triangle\n");
	}
	else{
		printf("Not a triangle");
	}
	
	return 0;
}
