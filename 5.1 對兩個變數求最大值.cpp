#include <stdio.h>

int main() {
	int a, b;
	printf("Please enter the first integer: ");
	scanf("%d",&a);
	printf("Please enter the second integer: ");
	scanf("%d",&b);
	
	if (a > b) {
		printf("The maximum is %d", a);
	}
	else if (a < b) {
		printf("The maximum is %d", b);
	} 
	else {
		printf("Equal");
	}
	return 0;
}
	/* 方法二 
	int a, b, max;
	printf("Please enter the first integer: ");
	scanf("%d",&a);
	printf("Please enter the second integer: ");
	scanf("%d",&b);
	max = a;
	if (max < b) {
		max = b;
	} 
	printf("The maximum is %d. \n", max);
	*/
	
	/* 方法三 
	int a, max;
	printf("Please enter the first integer: ");
	scanf("%d",&a);
	max = a;
	printf("Please enter the second integer: ");
	scanf("%d",&a);
	
	if (max < a) {
		max = a;
	} 
	printf("The maximum is %d. \n", max);
	*/
	

