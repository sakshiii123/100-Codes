#include <stdio.h>
int main(){
	int num;
	int temp,d,s=0;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	temp=num;
	while(temp>0){
		d=temp%10;
		s+=d;
		temp/=10;
	}
	if(num%s==0) printf("The number %d is a Harshad number.",num);
	else printf("The number %d is not a Harshad number.",num);
	return 0;
}

