# include <stdio.h>
int main() {
	int count = 0 ;
	int num ;
	for (num = 1 ; num <= 1000 && count < 3 ; num++)  { 
	//   num = 1000 ; num >= 1 && count < 3 ; num -- 前N大 
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2) {
			count ++ ;
			if (count <= 3){       // count == 3  找第三小的 
				printf("%d ", num) ;
			}
		}
	} 
	printf("\n");
	return 0 ; 
}

