#include <stdio.h> 
void countTo3(int);

int main () {
	countTo3(1);
	return 0;
}

void countTo3(int i) {
	if (i <= 3) {
		printf("%d\n",i);   // 這兩行互換的話會變成從3-1 
		countTo3(i+1);		// 程式遞迴  (在自己程式內呼叫自己) 
	}
}  
