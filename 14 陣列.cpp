#include <stdio.h>
int main() {
	int v[3];
	v[0] = 3;
	v[1] = 5;
	v[2] = 0;
	int max = v[0];
	if (v[1] > max) {
		max = v[1];
	}
	if (v[2] > max) {
		max = v [2];
	}
	printf("Max: %d",max);
	
	return 0;
}
//陣列是一群具有相同資料型態元素集合的資料型態
//在記憶體中，一個陣列會使用一段連續的記憶體空間來存放 
