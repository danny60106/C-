#include <stdio.h>
int main() {
	int num1, num2, num3;
	
	printf("Please enter the first integer: ");
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	printf("Please enter the third integer: ");
	scanf("%d",&num3);
	
	double average = (num1 + num2 + num3)/ 3.0; // 3. �N��double�����O  
	// double average = (num1 + num2 + num3)/(double)3; ��g 3���ܥN��Oint���O�A�G�|�y���p����~ 
	// (int) / (int) = (int) 
	
	// �����૬  �{���|�ۤv�� 
	//  		(int) + (float) = (float) + (float)
	//          (float) + (double) = (double) + (double) 
	
	// ����૬  �i�H�ѨϥΪ̥D�ʰ����O�ഫ 
	// 			 (double)(int)  
	
	printf("Average: %f\n",average);
	return 0;
}
