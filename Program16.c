#include <stdio.h>
int main(){
int num1,num2,num;
int t,c;

printf("Enter a number: ");
scanf("%d",&t);
num=0;
num1=0;
printf("1) %d\n",num1);
num2=1;
printf("2) %d\n",num2);
for(c=3;c<=t;c++){
num=num1+num2;
printf("%d) %d\n",c,num);
num1=num2;
num2=num;
}
return 0;
}

