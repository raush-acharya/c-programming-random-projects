/*WAP to convert entered number of days into years, months and days.*/
# include <stdio.h>
main(){
	int a,r;
	printf("Enter day:");
	scanf("%d",&a);
	//if (a<365){
	//	printf("%d days",a);	
	//}
//	else {
		r = a / 365;
		printf("%d years ",r);
		a=a-(r*365);
		r = a / 30;
		//if (r!=0){
			printf("%d months ",r);
			
		//}
		a=a-(r*30);
		//if (a!= 0){
		printf("%d days ",a);
		//}
//	}
}
