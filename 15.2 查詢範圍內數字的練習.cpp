#include <stdio.h>
int main() {
	int i, n[10];
	for (i = 1; i <= 10; i++) {
		scanf("%d", &n[i-1]);
	} //�H����J10�ӼƦr
	while (1) { 
		int l, r;
		printf("L R: ");
		scanf("%d%d", &l, &r);
		if (l == 0 && r ==0) {	
			break;				
		}
		printf("Ans: ");
		for (i = 0; i < 10; i++) {
			if (n[i] >= l && n[i] <= r) {
				printf("%d ",n[i]);
			}
		} 
		printf("\n");
	}
	return 0;
}   
