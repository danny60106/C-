#include <stdio.h>
int main() {
	int v[3] = {1, 2, 3};
	printf("%d\n", v[0]);
	printf("%d\n", v[2]);
	printf("%d\n", v[3/2]); //v[1]
	
	printf("%d\n", v[0.5);   //編譯錯誤 
	printf("%d\n", v[3/2.]); //編譯錯誤 
	
	printf("%d\n", v[3]); //未定義行為，因為v[i]最多到2，但程式仍會執行。
	printf("%d\n", v[4]);
	printf("%d\n", v[-1]);
	return 0;
} 


