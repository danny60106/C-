#include <stdio.h>
#include <stdlib.h>
#include <time.h>       //取得系統時間的time函式 
int main() {
	srand(time(0));     //一個程式只需要呼叫一次srand (亂數種seed rand) 
	int i ;
	for (i = 1; i <= 5; i ++) {
		printf("%d\n",rand());    //每次呼叫rand函式會回傳一個隨機亂數 
	}
	return 0;
}




