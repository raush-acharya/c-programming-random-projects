# include <stdio.h>
main(){
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		{
			
			printf("%d is the greatest number",a);
		}
		else
		{
			printf("%d is the greatest number",c);
		}
	}
	else if (b>c)
	{
		printf("%d is the greatest number",b);
	}
	else
	{
		printf("%d is the greatest number",c);
		
		
	}
}
