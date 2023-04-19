# include <stdio.h>
void input();
void output();
void main (){
	int a,age,num,i;
	printf("Press the corresponding number to do the corresponding task \n" );
	printf("1: Check the given age is eligible for voting or not \n");
	printf("2: Find the multiplication table \n");
	printf("3: calculate the area of a rectangle \n");
	printf("4: Calculate the perimeter of a rectangle \n");
	printf("5: Exit \n");
	scanf("%d",a);
	switch (a) {
    case 1: {
    	printf("Enter age to check:");
    	scanf("%d",&age);
    	if (age>=18)
    	printf("You are eligible for voting");
    	else 
    	printf("You are not eligible for voting");
    	break;
    }
    case 2: {
    	printf("Which number's multiplication table do you want?");
    	scanf("%d",&num);
    	for (i = 1; i < 11; ++i){
    	a= num*i;
    	printf("%d * %d = %d",num,i,a);
		}
		break;
	}
	
	default:
        printf("wrong Input\n");
}

}
