#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	printf("Enter your selection from the following [1-9]\n");
	printf("1: To check whether the given number is odd or even.\n");
	printf("2: To find the multiplication table from 1 to 10 number.\n");
	printf("3: To calculate arithmetic operation (Eg: Addition, Subtraction, Multiplication, (Division-Integer, Decimal, Modular)). \n");
	printf("4: To calculate area and perimeter of Rectangle.\n");
	printf("5: To calculate area and Perimeter of Circle.\n");
	printf("6: To calculate area of Triangle.\n");
	printf("7: To calculate Curved Surface area of Cylinder.\n");
	printf("8: To calculate Simple and Compound Interest. \n");
	printf("9: Exit\n");
	
	scanf("%d", &choice);
	if (choice<=9)
	{
		printf("You chose %d, which means we will ",choice);
	}
	
	
	int n;  //for case 1
	int i, j, product;  //for multiplication table
	int addition, subtraction, multiplication, division, modulus, a, b;  /*for arithmetic operations*/
	float perimeter, area, length, breadth;  /*for perimeter and area of rectangle and circle*/
	int radius;  /*for radius of circle and cylinder*/
	int height;  /*for height of cylinder*/
	float p, r, t, c, interest;  /*for simple and compound interest*/
	switch(choice)
	
	{
		case 1:
			
			printf("check whether the entered number is odd or even.\n");
			printf("Enter an integer number: \t");
			scanf("%d", &n);
			
			if(n%2==0)
			printf("\n\n %d is even", n);
			else
			printf("\n\n %d is odd", n);
			break;
			
		case 2:
			
			printf("find the multiplication table of any number from 1 to 10.\n");
			
			
			printf("Enter an integer: ");
			
			
			scanf("%d",&n);
			printf("\nThe multiplication table of %d is: \n",n);
			for (i = 1; i <= 10; ++i) {
				printf("%d * %d = %d \n", n, i, n*i);
			}
			break;
			
		case 3:
			
			printf("calculate arithmetic operations.\n");
			printf("Enter first number: ");
			scanf("%d",&a);
			printf("Enter second number: ");
			scanf("%d",&b);
 
			addition = a + b; //addition of 3 and 12
			subtraction = a - b; //subtract 3 from 12
			multiplication = a * b; //Multiplying both
			division = a / b; //dividing 12 by 3 (number of times)
			modulus = a % b; //calculation the remainder
 
			printf("Addition of two numbers a, b is : %d\n", addition);
			printf("Subtraction of two numbers a, b is : %d\n", subtraction);
			printf("Multiplication of two numbers a, b is : %d\n", multiplication);
			printf("Division of two numbers a, b is : %d\n", division);
			printf("Modulus of two numbers a, b is : %d\n", modulus);
			break;
		
		case 4:
			
			printf("calculate area and perimeter of Rectangle.\n");
			printf("Enter length: ");
			scanf("%d",&length);
			printf("Enter breadth: ");
			scanf("%d",&breadth);
			
			perimeter= 2*(length+breadth);
			area = (length*breadth);
			
			printf("The perimeter of rectangle with length: %d and breadth: %d is %d units.\n", length, breadth, perimeter);
			printf("The area of rectangle with length: %d and breadth: %d is %d sq.units.\n", length, breadth, area);
			break;
			
		case 5:
			
			printf("calculate area and Perimeter of Circle.\n");
			printf("Enter radius of the circle: ");
			scanf("%d",&radius);
			
			perimeter = 2*3.14*radius;
			area = 3.14*radius*radius;
			
			printf("The perimeter of circle of radius %d is : \t%.2f units.\n", radius, perimeter);
			printf("The area of circle of radius %d is : \t%.2f sq.units.\n", radius, area);
			break;
			
		case 6:
			
			printf("calculate area of Triangle.\n");
			printf("Enter height of the triangle: ");
			scanf("%d",&height);
			printf("Enter base length of the triangle: ");
			scanf("%d",&b);
			
			a = 0.5*b*height;
			
			printf("The area of triangle with base %d and height %d is = \t%d sq.units.", b, height, a);
			break;
			
		case 7:
			
			printf("calculate Curved Surface area of Cylinder.\n");
			printf("Enter height of the cylinder: ");
			scanf("%d",&height);
			printf("Enter radius of the base of the cylinder: ");
			scanf("%d",&radius);
			
			a = 2*3.14*radius*height;
			
			printf("The curved surface area of cylinder having radius %d and height %d is : \t%d sq.units.", radius, height, a);
			break;
		
		case 8:
			
			printf("calculate Simple and Compound Interest.\n");
			printf("Enter principal amount: ");
			scanf("%f",&p);
			printf("Enter rate of interest per annum: ");
			scanf("%f",&r);
			printf("Enter time(in years): ");
			scanf("%f",&t);
			
			interest = (p*t*r)/100;
			c = p * pow((1+(r/100)),t) - p;
			
			printf("The simple interest on principle %.2f with interest rate %.2f%% and at time %.0f years is: \t%.4f\n",p, r, t, interest);
			printf("The compound interest on principle %.2f with interest rate %.2f%% and at time %.0f years is: \t%.4f", p, r, t, c);
			break;
		
		
		case 9:
			
			printf("Exit the menu. Hope you enjoyed using the program.");
			break;
	
		default:
		  
		printf("The number you entered is: %d.\t Your option is invalid. Choose option between [1-9].\n",c); 
		break;
	}
}
