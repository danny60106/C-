#include <stdio.h>
void f(int[3]);

int main() {
	int v[3] = {1, 2, 3};
	f(v);
	return 0;
}

void f(int v[3]) {
	printf("Size of int: %zu\n", sizeof(int)); 
	printf("Size of v[0]: %zu\n", sizeof(v[0]));
	printf("Size of v: %zu\n", sizeof(v));  
	//在C語言中，由於將陣列複製的代價較高，故使用指標型來傳遞陣列型參數，透過記憶體位址來計算函式 
	printf("Length of v: %zu\n", sizeof(v) / sizeof(v[0]));
}
