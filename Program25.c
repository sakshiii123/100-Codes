#include <stdio.h>
int main(){
	int c=1;
	long long int s,mult,temp,num;
	printf("Enter a number : ");
	scanf("%lld",&num);
	
	mult=num*num;	 
	temp=num;
	while(temp>0){
		c*=10;
		temp/=10;
	}
	temp=mult;
	while(temp>0){
	s=temp%c;
	
		if(s==num){ 
			printf("The number %lld is an automorphic number.",num);
			break;
		}
		else{ 
			printf("The number %lld is not an automorphic number.",num);
			break;
		}
		temp/=10;	 
	}
	return 0;
}


