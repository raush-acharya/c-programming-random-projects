#include<stdio.h>
int main(){
	int y,t,z;
	printf("\tEnter any number: ");
    scanf("%d",&t);
    for (z ; z <= 10; z++)
    
    {
		y = t*z;
    	printf("\n \t %d x %d = %d",t,z,y); 
    }
}
