#include <stdio.h>
int main(){
int num1,num2,num;
int t,c;

printf("Enter nth position of fibonacci series number: ");
scanf("%d",&t);
num=0;
num1=0;
if(t==1){ printf("%d\n",num1);
return 0;
}
num2=1;
if(t==2){ printf("%d",num2);
return 0;
}
for(c=3;c<=t;c++){
num=num1+num2;
if(c==t)
 break;
num1=num2;
num2=num;
}
printf("%d",num);
return 0;
}

