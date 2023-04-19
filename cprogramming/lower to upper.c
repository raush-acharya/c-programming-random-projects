#include<stdio.h>
#include<conio.h>
void main(){
	char lc,uc;
	printf("enter a character in lower case:");
	lc=getchar();
	uc=lc-32;
	printf("equivalent upper case letter is: ");
	putchar(uc);
}
