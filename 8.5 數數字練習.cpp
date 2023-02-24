# include <stdio.h>
int main() {
	int a ,count = 0; 

	printf("Please enter the number:");
	scanf("%d", &a);
	
	while(count <= a){
		printf("%d\n",count);
		count++;
	}
	return 0 ; 
}
