# include <stdio.h>

main(){
	int a,r5,r7;
	printf("enter a number:");
	scanf("%d",&a);
	r5= a % 5;
	r7= a % 7;
	if (r5==0 && r7==0)
		printf("it is divisible");
	
	else{
		printf("it is not divisible");
	}
}
