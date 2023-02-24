#include <stdio.h>
void str_read(char[]);

int main() {
	char str[15];
	str_read(str);
	printf("%s\n", str);
	return 0;
} 

void str_read(char str[])  {
	int i = 0;
	while (1) {
		scanf("%c", &str[i]);
		if (str[i] == '\n')
			break;
		i++;
	}
	str[i] = '\0'; //while迴圈讀到最後str[i]會變成 \n，再將\n變成\0作為字串的結尾 
}
