#include<stdio.h>

int main()
{
	long  n, i=0, c = 0;
	scanf("%ld", &n);
	long a[n];

	for(i =0; i<n; i++)
	{
		scanf("%ld", &a[i]);
	}

	for(i = 0; i < n; i++)
	{
		if (a[i]<0)
		{
			c = c+1



			;
		}
		else if ((a[i-1]>0)&&(a[i]<0))
		{
			c = c-a[i-1];
		}
	}

	printf("%ld\n", c);
}