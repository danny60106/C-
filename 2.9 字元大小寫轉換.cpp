#include <stdio.h>

int main() {
	char input, output;
	scanf("%c", &input);
	output = input + ('a' - 'A');
	//output = input + 32; 32代表大小寫的ASCII差距 
	printf("%c", output);	
	return 0;
}
