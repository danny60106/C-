#include <stdio.h>

int main() {
	int a, b, min ;
	printf("Please enter two integers:") ;
	scanf("%d %d",&a ,&b ) ;
	min = a;
	if(min > b){
		min = b ;
	}
	printf("The minimum is %d.\n  ", min) ;
	return 0 ;
}

/*
int main() {
	int a, b, c, min ;
	printf("Please enter three integers:") ;
	scanf("%d %d %d",&a ,&b ,&c) ;
	min = a;
	if(min > b){
		min = b ;
	}
	if(min > c){
		min = c ;
	}
	printf("The minimum is %d.\n  ", min) ;
	return 0 ;
}
*/
