#include <stdio.h>
int main() {
	int i, n[5];
	for (i = 1; i <= 5; i++) {
		printf("%d: ",i);
		scanf("%d", &n[i-1]);
	} //�H����J5�ӼƦr
	while (1) { 			
		printf("Q: ");
		scanf("%d", &i);
		if (i == 0) {			//�{���n�D�W�O��i = 0 �ɵ����A
			break;				//��0��bwhile(0)���� �U�@��Nprintf���|���� 
		}
		printf("%d\n", n[i-1]);
	}
	return 0;
} 
