#include<stdio.h>
#include<math.h>

void main()
{
	long long n, a = 1378;
	scanf("%lld", &n);

	for(long long i = 1; i<n; i++)
	{
		a = a*1378;
	}

	long long s = a%10;

	printf("%lld\n", s);


}