#include <stdio.h>

int main() {
	int a, b, c;
	printf("Please enter the lengths: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a==b || b==c || a==c){
		printf("Isosceles triangle\n");
	}
	else{
		printf("not Isosceles triangle\n");
	}
	return 0;
}
