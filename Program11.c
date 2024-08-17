#include <stdio.h>
int main(){
	int num,temp,digit,sum=0;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	temp=num;
	while(temp>0){
		digit=temp%10;
		sum+=digit;
		temp/=10;
	}
	
	printf("Summation of digits of %d is: %d",num,sum);
	
	return 0;
}

