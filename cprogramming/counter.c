#include <stdio.h>
main(){
	int a,i,j,c,r,s,t;
	
	c=0;
	for(i=100;i<1000;i++){
		a=0; r=0; s=0; t=0;
		a=i;
		r=a%10;
		a=a/10;
		//printf("%d ",r);
		s=a%10;
		//printf("%d ",s);
		a=a/10;
		//printf("%d",);
		t=a%10;
		
		//printf("%d ",t);
		if(r!=s && r!=t && s!=t){
			c=c+1;
		}
	}
	printf("%d",c);
}
