#include <stdio.h>
#include <stdbool.h>
int main(){
	int i,m,n,c;
	int count;
	
	printf("Enter 2 numbers: ");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++){
		count=0;
	for(c=1; c <= i; c++){
		if(i%c==0){
			count++;
		
		}
	}
	if(count==2){
		printf("The number %d is prime number.\n",i);
	}
	else{
		printf("The number %d is not prime number.\n",i);
	}
	}
	return 0;
}

