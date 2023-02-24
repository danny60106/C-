#include <stdio.h>
void print_stars(int);
void print_triangle(int);

int main() {
	int n;
	printf("n = ");
	scanf("%d",&n);
	print_triangle(n);
	
	return 0;
}

//void 作為回傳值型態時， 表示該函式不回傳任何值。 

//當回傳值型態是void時，return可省略。 

void print_triangle(int n) {
	for (int i = 1; i <= n; i++) {
		print_stars(i);
		printf("\n");
	}
}

void print_stars(int i ) {
	for (int j = 1; j <= i; j ++) {
		printf("*");
	}
}
