#include <stdio.h>
int main(){
	int num1,num2;
	
	printf("Enter 2 numbers:");
	scanf("%d%d" ,&num1 ,&num2);
	
	if(num1>num2) 
	printf("The greater of two numbers is %d.",num1);
	
	else if(num2>num1)
	printf("The greater of two numbers is %d.",num2);
	
	else
	printf("The numbers are equal.");
	return 0;
}

