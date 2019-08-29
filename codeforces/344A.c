#include<stdio.h>

int main()
{
	long int i = 0, n, c = 0;
	scanf("%ld", &n);
	long int a[n];

	for(i = 0; i<n; i++)
	{
		scanf("%ld", &a[i]);
	}

	for(i = 0; i<n; i++)
	{
		if(a[i] != a[i+1])
		{
			c++;
		}
	}

	printf("%ld\n", c);

}