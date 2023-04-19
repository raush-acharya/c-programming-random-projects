# include <stdio.h>
main(){
	char a;
	a='$';
	int i,j;
	for (i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c\t",a);
		}
		printf("\n");
	}
}
