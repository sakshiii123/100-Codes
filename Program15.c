#include <stdio.h>
int main(){
	int x,y,a,c,l,n,sum;
	int count=0,temp;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&x,&y);
	

	for(a=x;a<=y;a++){
		temp=a;
		count=0;
		while(temp>0){
			temp/=10;
			count++;
		}
		
		temp=a;
		sum=0;
		while(temp>0){
			l=temp%10;
				n=1;
			for(c=1;c<=count;c++){
				n=n*l;
			}
		sum=sum+n;	 	 
		temp/=10;
		} 	  
	if(a==sum) printf("The number %d is an armstrong number.\n",a);

	}
	return 0;
}










