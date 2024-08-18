#include <stdio.h>
int main(){
	int c,num,sum=0;

	printf("Enter a number : ");
	scanf("%d", &num);
	for(c=1;c<num;c++){
		if(num%c==0) {
		sum+=c;	 
		}
	}
	if(sum==num) printf("The number %d is a perfect number.",num);
	
	else printf("The number %d is not a perfect number.",num);
	
	return 0;
}

