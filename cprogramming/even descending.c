# include <stdio.h>
main(){
	int a,i,s;
	a=100;
	for(i=1;i<=50;i++){
		printf("%d\n",a);
		s=s+a;
		a=a-2;	
	}
	printf("The sum is: %d",s);
}
