// WAP to swap two variables
#include <stdio.h>
int main(){
	int a , b , c;
	c = 0;
	printf("Enter a:\n");
	scanf("%d",&a);
	
	printf("Enter b:\n");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("a=%d \n",a);
	printf("b=%d \n",b);
	
}
