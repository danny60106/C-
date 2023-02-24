#include <stdio.h>
int main() {
	int num1, num2, num3;
	
	printf("Please enter the first integer: ");
	scanf("%d",&num1);
	printf("Please enter the second integer: ");
	scanf("%d",&num2);
	printf("Please enter the third integer: ");
	scanf("%d",&num3);
	
	double average = (num1 + num2 + num3)/ 3.0; // 3. 代表double的型別  
	// double average = (num1 + num2 + num3)/(double)3; 單寫 3的話代表是int型別，故會造成計算錯誤 
	// (int) / (int) = (int) 
	
	// 隱性轉型  程式會自己轉 
	//  		(int) + (float) = (float) + (float)
	//          (float) + (double) = (double) + (double) 
	
	// 顯性轉型  可以由使用者主動做型別轉換 
	// 			 (double)(int)  
	
	printf("Average: %f\n",average);
	return 0;
}
