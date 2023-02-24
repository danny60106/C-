#include <stdio.h>
int main() {
	int int1, int2;
	printf("Please enter the first integer: ");
	scanf("%d",&int1); //int1:3
	printf("Please enter the second integer: ");
	scanf("%d",&int2); //int2:5
	
	int temp = int1; //temp = 3, int1 = 3, int2=5
	int1 = int2;     //temp = 3, int1 = 5, int2=5
	int2 = temp;     //temp = 3, int1 = 5, int2=3
	
	//int1 = int1 + int2; 
	//int2 = int1 - int2;
	//int1 = int1 - int2;
	
	//int1 = int1 ^ int2; 
	//int2 = int1 ^ int2;
	//int1 = int1 ^ int2;
	
	printf("integer1: %d \n",int1); //int1:5
	printf("integer2: %d \n",int2); //int2:3
	return 0;
}
