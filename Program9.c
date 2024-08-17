#include <stdio.h>
#include <stdbool.h>
int main(){
	int n,c;
	bool flag=true;
	
	printf("Enter a number: ");
	scanf("%d",&n);

	for(c=2; c <= n/2; c++){
		if(n%c==0){
			flag=false;
			break;
		}
	}
	if(flag){
		printf("The number %d is prime number.\n",n);
	}
	else{
		printf("The number %d is not prime number.\n",n);
	}
	
	return 0;
}

