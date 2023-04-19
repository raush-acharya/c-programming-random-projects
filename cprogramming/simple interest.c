#include <stdio.h>
#include <math.h>
int main()
{
	float p, t, r, c;
	p = 1000;
	t = 4;
	r = 3;
	c = p*pow((1+(r/100)),t) - p;
	printf("The compound interest on principle %d at time %d with rate %d is = \t%f", p, t, r, c);
}