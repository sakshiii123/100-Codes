#include <stdio.h>
int main(){
	int num1,num2,num3;
	
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2){
		if(num3>num1){
			printf("The greater number is %d.",num3);
		}
		else{
			printf("The greater number is %d.",num1);
		}
	}
	else{
		if(num3>num2){
			printf("The greater number is %d.",num3);	
		}
		else{
			printf("The greater number is %d.",num2);
		}
	}
	
	return 0;
}

