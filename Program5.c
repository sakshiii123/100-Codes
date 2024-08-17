#include <stdio.h>
int main(){
int c, num1,num2;
int sum=0;
printf("Enter two numbers:");
scanf("%d%d", &num1, &num2);
if(num1>0 && num2>0){
for(c=num1;c<=num2;c++){
	sum=sum+c;
}
printf("The sum of natural numbers between %d and %d is: %d",num1,num2,sum);
}
else
{
printf("The number is not a natural number.");
}
return 0;
}

