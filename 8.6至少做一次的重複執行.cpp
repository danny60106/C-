#include <stdio.h>
int main(){
	int ans = 4;
	int guess ;
	
	do {
		printf("Please enter your guess: ");
		scanf("%d", &guess);
		if (guess > ans){
			printf("Too Large!\n");
		}else if(guess < ans){
			printf("Too Small!\n");
		}else{
			printf("Correct!\n");
		}
	}while(guess!=ans);
	
	return 0;
}
