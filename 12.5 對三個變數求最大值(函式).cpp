#include <stdio.h>
int max3(int ,int ,int);

int main () {
	int i, j, k;
	printf("Please input three number : ");
	scanf("%d %d %d",&i, &j, &k);
	printf("%d", max3(i,j,k));	
	
	return 0;
}

int max3(int a, int b, int c) {
	int max = a;
	if (b > max) {
		max = b;
	} 
	if (c > max){
		max = c;
	} 
	return max;
} 
