#include <stdio.h>

int main() {
	char input, output;
	scanf("%c", &input);
	output = input + ('a' - 'A');
	//output = input + 32; 32�N��j�p�g��ASCII�t�Z 
	printf("%c", output);	
	return 0;
}
