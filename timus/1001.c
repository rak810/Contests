#include<stdio.h>
#include<string.h>

long factorial(long n, long k)
{
	long i = 0, fact = 1;
	while(i*k < n)
	{
		fact = fact * (n - i*k);
		i = i+1;
	}
	return(fact);
}

int main()
{
	long n, f, c;
	char mark[21];
	scanf("%ld", &n);
	scanf("%s", mark);
	c = strlen(mark);

	f = factorial(n, c);
	printf("%ld\n", f);
}