# include <stdio.h>
main(){
	int i,s;
	s=0;
	do{
		i++;
		s=s+i;
	}while(i<100);
	printf("sum is %d",s);
}
