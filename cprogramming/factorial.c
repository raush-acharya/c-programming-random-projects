#include <stdio.h>
long int fact;
long int factorial(int n);
void main(){
	int n;
	printf("enter the number:");
	
	scanf("%d",&n);
	fact= factorial(n);
	printf("/nthe factorial of %d is %ld",n,fact);
}
long int factorial (int n)
{
	
	int i;
	
	fact=1;
	for(i=1; i<=n; i++)
		fact=fact*i;
	
	return(fact);
}
