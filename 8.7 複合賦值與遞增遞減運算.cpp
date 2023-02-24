#include <stdio.h>
int main(){
	int a = 0;
	int b ;
	b = ++ a ;
	printf("%d %d\n",a,b);
	// a 做完前 +1 
	b = a ++ ;
	printf("%d %d\n",a,b);
	// a 做完後 +1 
	
	int count ;
	count = count + 1;
	count += 1;
	count ++ ; 
	//以上三者相同
	count + 1; 
	// 不會改變count的值 
	
	return 0;
}
