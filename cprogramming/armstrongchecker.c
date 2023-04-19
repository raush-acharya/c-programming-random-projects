#include <stdio.h>
int main(){
	int r,a,u,s,h;
	int i;
	s=0;
	printf("Enter a number:");
	scanf("%d",&a);
	h=a;
	for (i=1;i<4;i++){
		r=a %10;
		u=r*r*r;
		s=s+u;
		a=a/10;
	}
	if (h==s){
	printf("The number is armstrong.");}
	else
	printf("The number is not armstrong.");
}
