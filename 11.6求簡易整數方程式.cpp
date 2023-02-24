#include <stdio.h>
int main(){
	int i, j;
	for (i = 1; i <= 30 ; i++) {
		for (j = 1; j <= 30 ; j++) {
			if ( i+j ==30 && i*j ==221 && i<=j) {
				printf("%d %d",i,j);
			}
		}
	}
	
	/* 提高程式執行效率 
	for (i = 1; i <= 30/2 ; i++) {					// i = 1 - 15  
		for (j = 30/2; j <= 30 ; j++) {				// j = 15- 30
			if ( i+j ==30 && i*j ==221 && i<=j) {
				printf("%d %d",i,j);
			}
		}
	}
	*/
	
	/*
		int i ;
		for (i=1; i <= 30/2; i++) {
			int j = 30-i;
			if( i*j == 221) {
				printf("%d %d", i, j);
			}
		}
	*/
	 
	return 0;
}
