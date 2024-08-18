#include <stdio.h>
int main(){
int c,num;

printf("Enter a number : ");
scanf("%d", &num);
printf("Factors of %d are : \n",num);

for(c=1;c<=num;c++){
if(num%c==0) printf("\t%d",c);

}
return 0;
}

