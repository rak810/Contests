#include<stdio.h>
#include<math.h>

unsigned long long int power(unsigned long long int a, unsigned long long int b)
{
	unsigned long long int r, sum = 0;

	/*while(c != b)
	{
		r = r*a;
		c++;
	} */
	r = pow(a,b);
	sum = r%1000000000000;

	/*while(r != 0)
	{
		sum = sum + (r%10);
		r = r/10;
	}*/

	return(sum);
}

int main(int argc, char const *argv[])
{
	unsigned long long int a;

	a = power(2, 1000);

	printf("%llu\n", a);
	
}