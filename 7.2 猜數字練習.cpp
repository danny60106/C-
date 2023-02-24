# include <stdio.h>
int main() {
	int guess ;
	int answer = 4;
	printf("Please enter your guess: ");
	scanf("%d", &guess);
	if (guess > answer) {
		printf("Too large!\n") ;
	} else if (guess < answer) {
			printf("Too small!\n");
	} else if (guess == answer) {
			printf("Correct!\n");
	}
	return 0 ;
}
