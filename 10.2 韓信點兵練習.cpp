# include <stdio.h>
int main() {
	int n = 1 ;
	
	while (n % 3 != 2 || n % 5 != 3 || n % 7 != 2){ // ���ŦX�X����� 
		++ n ;
	}
	
	printf("%d \n ", n);
	return 0 ; 
}
/*
		for (
			n = 1;
			n % 3 != 2 || n % 5 != 3 || n % 7 != 2;
			++ n);
*/
