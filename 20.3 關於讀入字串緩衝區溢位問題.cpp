#include <stdio.h>
void str_read(char[], int);

int main() {
	char str[15];
	str_read(str, 14);
	printf("%s\n", str);
	return 0;
} 

void str_read(char str[], int n)  {
	int i ;
	for (i = 0; i < n; i++) {
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
	}
	str[i] = '\0'; //while迴圈讀到最後str[i]會變成 \n，再將\n變成\0作為字串的結尾 
}
