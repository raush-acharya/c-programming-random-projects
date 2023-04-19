#include <stdio.h>
main (){
	float a,s;
	printf("Enter monthly sales amount:");
	scanf("%f",&a);
	if (a>=1000){
		s=a*0.1;
	}
	else{
		s=a*0.05;
	}
	printf("Your commission is: %.2f",s);
}
