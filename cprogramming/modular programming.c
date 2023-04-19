#include<stdio.h> 

int main () 

{ 

	int c;  

	printf("Enter your selection from the following [1-9]\n");
	printf("1: To check whether the given number is odd or even.\n");
	printf("2: To find the multiplication table from 1 to 10 number.\n");
	printf("3: To calculate arithmetic operation (Eg: Addition, Subtraction, Multiplication, (Division-Integer, Decimal, Modular)). \n");
	printf("4: To calculate area and perimeter of Rectangle.\n");
	printf("5: To calculate area and Perimeter of Circle.\n");
	printf("6: To calculate area of Triangle.\n");
	printf("7: Curved Surface area of Cylinder.\n");
	printf("8: To calculate Simple and Compound Interest. \n");
	printf("9: To check whether the given number is odd or even.\n");


	scanf("%d",&c);   
	int num;
	int i, j, product;
	switch(c) 

	{ 

	case 1:  


    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

	break; 

	case 2:  


	
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=10;j++)
			{
				product = i*j;
				printf("%d x %d = %d\t", i, j, product);
			}
			printf("\n");
		}

	break;  

	case 3:  

	printf("The number you entered is: %d.\t You've chosen Tuesday.\n",c); 

	break;  

	case 4:  

	printf("The number you entered is: %d.\t You've chosen Wednesday.\n",c); 

	break;  

	case 5:  

	printf("The number you entered is: %d.\t You've chosen Thursday.\n",c); 

	break;  

	case 6:  

	printf("The number you entered is: %d.\t You've chosen Friday.\n",c); 

	break;  

	case 7:  

	printf("The number you entered is: %d.\t You've chosen Saturday.\n",c); 

	break;    

	default:  

	printf("The number you entered is: %d.\t Your option is invalid. Choose option between [1-9].\n",c); 

	break;  

	} 
}

