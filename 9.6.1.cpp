# include <stdio.h>
int main() {
	int num ;
	for (num = 1; num <= 10 ; ++ num) {
		if (num == 5) {
			continue;
		}
		printf("%d\n" ,num);
	}
	return 0 ; 
}
//在重複執行述句中跳過後面的程式區塊，會跳過該條件成立的情況 
 

