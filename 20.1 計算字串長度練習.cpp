#include <stdio.h>

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
} 

int main() {
	char str[] = "Hello world" ;
	printf("Length: %zu\n", sizeof(str)); //會回傳 11 + 1 個長度，'\0'會被計算在內 
	printf("Length: %d\n", str_len(str));
	return 0;
}
