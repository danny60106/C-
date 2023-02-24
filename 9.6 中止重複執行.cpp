# include <stdio.h>
int main() {
	int num ;
	for (num = 1; num <= 10 ; ++ num) {
		if (num == 5) {
			break;
		}
		printf("%d\n" ,num);
	}
	return 0 ; 
}
//中斷目前所屬的重複執行述句，會強制中止for迴圈 
 

