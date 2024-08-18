#include <stdio.h>
int main(){
	int num,c,l,n,sum=0;
	int count=0,temp;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	temp=num;
	while(temp>0){
		temp/=10;
		count++;
	}
		temp=num;
		while(temp>0){
		l=temp%10;
			n=1;
			for(c=1;c<=count;c++){
				n=n*l;
			}
		sum=sum+n;	 	 
		temp/=10;
		} 	  
	if(num==sum) printf("The number %d is an armstrong number.",num);
	else printf("The number %d is not an armstrong number.",num);
	return 0;
}










