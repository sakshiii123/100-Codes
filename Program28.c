#include <stdio.h>
int main(){
	int n,m,c1,c2,sum2=0,sum1=0;
	
	printf("Enter 2 number : ");
	scanf("%d%d",&n,&m);
	
	for(c1=1;c1<=n;c1++){
		if(n%c1==0){
		sum1+=c1;
		}	 
	}
	for(c2=1;c2<=m;c2++){
		if(m%c2==0){
		sum2+=c2;
		}	 
	}		  
	if((sum1/n)==(sum2/m)) printf("The number %d and %d are friendly pairs.",n,m);
	else printf("The number %d and %d are not friendly pairs.",n,m);
	return 0;
}

