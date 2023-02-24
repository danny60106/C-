# include <stdio.h>
int main() {
	int min, max ;
	printf("Min = ");
	scanf("%d", &min);
	printf("Max = ");
	scanf("%d", &max);
	
	int num ;
	for (num = min ; num <= max ; ++ num)  {
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2) {
			printf("%d ", num) ;
		}
	} 
	
	return 0 ; 
}

