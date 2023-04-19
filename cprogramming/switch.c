#include <stdio.h>
#include <conio.h>
int main()
{
	int number;
	printf("Enter num of day ");
	scanf("%d",&number);
	switch(number){
		case 1:
		    printf("The day is sunday. \n");
			break;
		case 2:
			printf("The day is monday. \n");
			break;
		case 3:
			printf("The day is tueday. \n");break;
		case 4:
			printf("The day is wedday. \n");break;
		case 5:
			printf("The day is thursday. \n");break;
		case 6:
			printf("The day is friday. \n");break;
			
		case 7:
			printf("The day is saturday. \n");break;	
		default:
			printf("Invalid Option Given");
			
			
	}

	return 0;
}
