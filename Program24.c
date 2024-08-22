#include <stdio.h>
#include <stdbool.h>

bool PerfectSquare(int num){
	int c,rem;
	bool flag=false;
	
	for(c=1;c<=num;c++){
		rem=num/c;
		if(rem==c){
		flag=true;
		break;
		}
	}
	return flag;	
}
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(PerfectSquare(num))
		printf("The number %d is a perfect square",num);
	else 
		printf("The number %d is not a perfect square",num);
return 0;
}

