#include <stdio.h>
#include<math.h>

void main ()
{
	int a, b, c, d, e, f, Total=0;
	float Percentage=0, CGPA = 0;
	printf ("Enter your marks on English:");
	scanf ("%d", &a);
	printf ("Enter your marks on Nepali:");
	scanf ("%d", &b);
	printf ("Enter your marks on Physics:");
	scanf ("%d", &c);
	printf ("Enter your marks on Chemistry:");
	scanf ("%d", &d);
	printf ("Enter your marks on Mathematics:");
	scanf ("%d", &e);
	printf ("Enter your marks on Computer Science:");
	scanf ("%d", &f);
	
	Total = a + b + c + d + e + f;
	
	if (a < 30)
	{
      printf ("Student is FAIL in English!");
    }
	else if (b < 30)
    {
      printf ("Student is FAIL in Nepali!");
    }
	else if (c < 30)
    {
      printf ("Student is FAIL in Physics!");
    }
	else if (d < 30)
    {
      printf ("Student is FAIL in Chemistry!");
    }
	else if (e < 30)
    {
      printf ("Student is FAIL in Mathematics!");
    }
	else if (f < 20)
    {
      printf ("Student is FAIL in Computer Science!");
    }
	else
    {
      printf ("Student is PASS!");
	}
	Percentage = (Total / 600.00) * 100.00;
	CGPA = (Percentage / 100.00) * 4.00;
	printf("\ntotal=%d", Total);
	printf ("\nPercentage= %f", Percentage);
    printf ("\nCGPA= %f", CGPA);
}

