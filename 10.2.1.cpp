# include <stdio.h>
int main() {
	int max ;
	printf("Max = ");
	scanf("%d", &max);
	int ans = 0 ;
	int num ;
	for (num = max ; num >= 1 && ans == 0 ; -- num)  {
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2) {
			ans = num ;
		}
	} 
	if (ans != 0) {
		printf("%d \n ", ans);
	} else {
		printf("�d��L�p�䤣��!");
	}
	return 0 ; 
//�ȧ�X�̤j��ans 

