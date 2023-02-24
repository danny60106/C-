#include <stdio.h>

int main() {
	int ans = 5, guess ;
	printf("Please input a number: ");
	scanf("%d", &guess);
	if (ans == guess) {
		printf("right");
	}
	else if (ans < guess ) {
		printf("smaller");
	}
	else {
		printf("bigger");
	}
		
	return 0;
}
