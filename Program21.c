#include <stdio.h>
int main(){
	int c,num;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("The prime factors of %d  are : ",num);
	for(c=2;num>1;c++){
		while(num%c==0){
			printf("\t%d",c);
			num/=c;
		}
	}
	
	return 0;
}

