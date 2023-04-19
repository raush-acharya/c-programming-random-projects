# include <stdio.h>

main (){
	int a,r;
	printf("Enter a number:");
	scanf("%d",&a);
	r=a%2;
	if (r==0)
	printf("the number is even");
	else 
	printf("odd");
}
