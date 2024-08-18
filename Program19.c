#include <stdio.h>
int main(){
int c,power,num;
int n=1;

printf("Enter a number : ");
scanf("%d",&num);

printf("Enter its exponent : ");
scanf("%d",&power);


for(c=1;c<=power;c++){
n*=num;
}
printf("%d to the power %d is %d",num,power,n);
return 0;
}

