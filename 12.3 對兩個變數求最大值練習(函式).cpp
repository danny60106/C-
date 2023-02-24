#include <stdio.h>
int max2 (int, int); 

int main() {
	int a, b ;
	printf("Please input two number: ");
	scanf("%d %d",&a ,&b);
	printf("Max is %d." ,max2(a,b));
	
	return 0;
} 

int max2 (int x, int y) {
	if (x >= y) {
		return x;
	}else {
		return y;
	}
}
