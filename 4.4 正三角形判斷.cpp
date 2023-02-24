#include <stdio.h>

int main() {
	int a, b, c;
	printf("Please enter the lengths: ");
	scanf("%d %d %d", &a, &b, &c);
	if ( a==b && b==c){
		printf("Regular triangle\n");
	}
	else {
		printf("Not Regular triangle\n");
	}
	return 0;
}
