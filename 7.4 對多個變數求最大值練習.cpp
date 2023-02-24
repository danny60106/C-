# include <stdio.h>
int main() {
	int a, b, c, max ;
	printf("Please enter three number: ");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	if( max <= b && b >=c){
		max = b ;
	}else if( max <= c && c >=b){
		max = c ;
	}
	printf("Maximum is : %d", max);
	return 0 ;
}
