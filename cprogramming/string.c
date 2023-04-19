#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char a[20],b[20];
   printf("Enter first string: \n");
   gets(a);
   printf("Enter second string: \n");
   gets(b);
   printf("The length of the first string is: %d\n",strlen(a));  // first string function
   printf("The length of the second string is: %d\n",strlen(b));
                                 // second string function
   printf("The lower case of first string is: %s\n",strlwr(a));   // third string function
   printf("The lower case of second string is: %s\n",strlwr(b));
   printf("The upper case of first string is: %s\n",strupr(a));   // fourth string function
   printf("The upper case of second string is: %s\n",strupr(b));
   
   
   if (strcmp(a,b) == 0)                                          // fifth string function
   {
     printf("Strings are equal\n");
   }
   else
   {
   printf("Strings are not equal\n");
   }
   strcpy(a,b);														// sixth string function
   printf("The value of first string when swapped with second string is: %s \n",a);
}
