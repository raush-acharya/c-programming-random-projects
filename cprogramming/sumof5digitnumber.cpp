// WAP to read a 5 digit number and find the sum of individual digits.
# include <stdio.h>
main(){
	int a,r,i,s;
	s=0;
	printf("enter 5 digit number:");
	scanf("%d",&a);
	if (a>=10000 && a<=99999){
		for(i=0;i<5;i++){
			r=a%10;
			s=s+r;
			a=a/10;
		}
	}
	else 
	printf("please try again and enter a 5 digit number this time");
	printf("The sum is %d",s);
}
