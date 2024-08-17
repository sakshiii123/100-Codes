#include <stdio.h>
int main(){
	int num,temp,rev=0;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	temp=num;
	while(temp>0){
		rev = rev*10 + temp%10;
		temp/=10;
	}
	if(rev==num)
	printf("The number %d is a palindrome number.",num);
	else
	printf("The number %d is not a palindrome number.",num);	
	return 0;
}

