#include <stdio.h>
int main ()

{
	int a,b,c,g;
	printf("Enter three numbers:");
	scanf( "%d , %d , %d",&a,&b,&c);
	if (a>b && a>c){
		g=a;
	}
	else if (b>c && b>a){
		g=b;
	}
	else {
		g=c;
	}
	printf("%d is the greatest number",g);
}
