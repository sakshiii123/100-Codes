#include <stdio.h>
int main(){
int c, num;
int sum=0;
printf("Enter a number :");
scanf("%d", &num);
if(num>0){
for(c=1;c<=num;c++){
	sum=sum+c;
}
printf("The sum of %d natural numbers is: %d",num,sum);
}
else
{
printf("The number is not a natural number.");
}
return 0;
}

