#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int counter[11] = {0};
	int i;
	for (i = 1; i <= 100000; i++){
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int sum = dice1 + dice2;
		counter[sum-2]++;   // 程翴计㎝2癸莱璸计竟counter[0] 
	}
	for (i = 2; i <= 12; i++) {  // 翴计㎝ 2-12 珿璸计竟眖2计12 
		printf("%d: %d\n",i, counter[i-2]);
	}
	return 0;
} 
