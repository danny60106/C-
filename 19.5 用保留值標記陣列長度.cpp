#include <stdio.h>
int maxv(int[]);

int main() {
	int a[] = {3, 6, 7, -1}; 		//保留值-1 
	printf("Max: %d\n", maxv(a));
	
	int b[] = {3, 9, 1, 2, 7, -1};	//保留值-1 
	printf("Max: %d\n", maxv(b));
	
	return 0;
} 

int maxv(int v[]) {
	int max = v[0], i = 1;
	while (v[i] != -1) { 	//當i = -1 時， 迴圈結束 
		if (v[i] > max) {
			max = v[i];
		}
		i++;
	}
	return max;
}
