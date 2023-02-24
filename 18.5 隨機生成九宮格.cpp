#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand(time(0));
	int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j, k = 0 ;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			int r = rand() % (9-k) + k;		//從剩下的格子中挑一格來做交換, r 是剩下中的編號 
			int m = r / 3;		//m 是縱座標 
			int n = r % 3;		//n 是橫座標
			int t = v[i][j];
			v[i][j] = v[m][n];
			v[m][n] = t;
			k++;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
// 二維交換法 

