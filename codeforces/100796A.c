#include<stdio.h>

int main()
{
	long long a, b, p = 1, k, j, s = 0;
	scanf("%lld%lld", &a, &b);

	while((a!=0)||(b!=0))
	{
		k = a%10;
		j = b%10;
		if(k>j)
		{
			s = s+(k-j)*p;
		}
		else
		{
			s = s+(j-k)*p;
		}
		a = a/10;
		b = b/10;
		p = p*10;

	}

	printf("%lld\n", s);
} 