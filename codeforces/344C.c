#include<stdio.h>
#define lli long long int
int main()
{
	lli a,b,r, c = 1;
	scanf("%lld%lld", &a, &b);

	lli gcd(lli a, lli b)
	{
		lli r;
		while(b!=0)
		{
			r = b;
			b = a%b;
			a = r;
		}
		return(a);
	}
	
	if(a>b)
	{	
		printf("%lld\n", (gcd(a, b)+(b%a)));
	}
	else
	{
		printf("%lld\n", (gcd(a, b)+(a%b)));
	}
}