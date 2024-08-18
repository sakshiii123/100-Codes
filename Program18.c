#include <stdio.h>
int main(){
	int c,n,m=1;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(c=1;c<=n;c++){
	m*=c;
	}
	printf("Factorial of %d is : %d",n,m);
	return 0;
}

