#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //加入亂數種來做隨機數 
	int i, n, counter[10] = {0};
	for (i = 1; i <= 10; i++) {
		do {
			n = rand() % 10 + 1; 
		} while (counter[n-1] != 0); //透過計數器的方式來計算該數字是否重複 
		printf("%d ", n);
		counter[n-1]++;
	}
	printf("\n");
	return 0;
}   
