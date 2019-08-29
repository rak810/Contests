#include<stdio.h>

int main()
{
	long n, i = 0, c = 0, s = 0,max = 0;
	scanf("%ld", &n);
	long a[n];

	for(i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	for(i = 0; i < n; i++)
	{
		s = max - a[i];
		c = c+s;
	}

	printf("%ld\n", c);

}