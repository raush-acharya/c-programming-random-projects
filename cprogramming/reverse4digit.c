# include <stdio.h>
main(){
	int r,a,u,s;
	u=0;
	printf("enter a four digit number:");
	scanf("%d",&a);
	if (a>=1000 && a<= 9999){
		for (s=1;s<5;s++){
		r=a%10;
		u=(u*10)+r;
		a=a/10;
		}
	printf("the result is %d",u);
	}
	else
	printf("invalid input ; enter 4 digit number");
}
