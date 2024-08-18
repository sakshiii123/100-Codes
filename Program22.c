#include <stdio.h>
int main(){
	int m,c,d,sum,temp,n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	temp=n;
	sum=0;
	while(temp>0){
		d=temp%10;
		m=1;
		for(c=1;c<=d;c++){
		m*=c;
		}
		sum+=m;	   	   
		temp/=10;
	}
	if(n==sum) printf("The number %d is a strong number. ",n);
	
	else printf("The number %d is not a strong number. ",n);
	return 0;
}

