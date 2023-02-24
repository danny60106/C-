#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0)); //加入亂數種來做隨機數 
	int i, j, n[10];
	for (i = 1; i <= 10; i++) {
		do {
			n[i-1] = rand() % 10 + 1; //隨機找出 10個數字放入陣列 
			for (j = 1; j < i; j++) { //檢查之前的數字是否重複 
				if (n[i-1] == n[j-1]) { //已經出現過 
					break;
				}
			}
		} while (j != i); //j!=i代表數字有重複需重新再找一次數字 
		printf("%d ", n[i-1]);
	}
	printf("\n");
	return 0;
}   
