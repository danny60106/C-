#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//當不需要回傳值時，函式型態為void
void arrayRand(int[10]);  //將陣列中的元素指定為隨機數 
int arrayMax(int[10]);	  //算出陣列中元素的最大值 
void arrayPrint(int[10]); //印出陣列中的元素 

int main() {
	srand(time(0));
	int v[10];
	arrayRand(v);
	arrayPrint(v);
	printf("Max: %d\n", arrayMax(v));
	return 0;
} 

void arrayRand(int v[10]) {
	for (int i = 0; i < 10; i++) {
		v[i] = rand() % 100;
	}
}

int arrayMax(int v[10]) {
	int max = v[0];
	for (int i = 1; i < 10; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max; 
}

void arrayPrint(int v[10]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ",v[i]);
	}
	printf("\n");
} 
/*
	* 一般資料型態會將引述複製一份後傳入函式，但若是陣列型態卻不會複製一份陣列
	
	* 當函式回傳值是陣列時，是不合法的 
*/
