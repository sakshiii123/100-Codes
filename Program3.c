#include <stdio.h>
int main(){
	int num,temp,sum=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num>0){
	temp=num;
		while(temp>0){
			sum+=temp;
			temp--;
		}
		printf("Sum of first %d natural numbers are: %d",num,sum);
	}
	else{
		printf("Enter a natural number");
	}
	
	return 0;
}

