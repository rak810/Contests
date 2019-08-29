#include<stdio.h>

int main()
{
	long n, h, k, c = 0, d=0;
	scanf("%ld%ld%ld", &n, &h, &k);
	long x[n];
	long i = 0;

	for(i = 0; i < n; i++)
	{
		scanf("%ld", &x[i]);
	}

	for(i = 0; i<n; i++)
	{	
		if((x[i]+d) > h)
		{
			d = 0;
			c++;
		}
		d = d+x[i];
		c = c + d/k;
		d = d%k;
	}
	
	if(d > 0)
		c = c+d;

	printf("%ld", c);
}