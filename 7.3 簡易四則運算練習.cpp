# include <stdio.h>
int main() {
	int a,b ;
	char op;
	float answer;
	scanf("%d %c %d", &a, &op, &b);
	if (op == '+'){
		answer = a + b ;
	} else if (op == '-'){
		answer = a - b ;
	} else if (op == '*'){
		answer = a * b ;
	} else if (op == '/'){
		answer =(float) a / b ;
	}
	printf("ANS: %f\n", answer);
	return 0 ;
}
