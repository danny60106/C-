#include <stdio.h>

int main() {
	int num, total ;
	printf("Please enter the number of customers: ") ;
	scanf("%d", &num) ;
	total = num * 300;
	if(total >= 3000) {
		total = total * 0.8;
	}
	else {
		total = total ;
	}
	printf("Total: %d\n ", total) ;
	return 0;
}
