#include<stdio.h>

long long int lattice(long long int a)
{
	long long int i = 1, j = 1;

	for( i = 1; i<=a; i++)
	{
		j = j*(i+a)/i;
	}

	return(j);

}



int main()
{
	long long int b, c;;
	scanf("%lld", &b);

	c = lattice(b);

	printf("%lld\n", c);




}