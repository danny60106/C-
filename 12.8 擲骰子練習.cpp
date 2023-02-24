#include <stdio.h>
#include <stdlib.h>
#include <time.h>     

int main() {
	srand(time(0)); 
	int i;
	for (i = 1; i <= 5; i ++) {
		int dice = rand() % 6 + 1 ; //求餘數的概念，會剩下 0-5 
		printf("%d\n",dice);   
	}
	return 0;
}
//使用這個方式各點數的機率會不同 

