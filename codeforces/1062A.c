#include<stdio.h>


int main()
{
	int n, i = 0, c = 0;
	scanf("%d", &n);
	int a[n];

	for(i = 0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0;i<n;i++)
	{
		if(((a[i] + 1) == a[i+1]) && (a[i] != a[0]))
		{
			c++;
		}
	}

	printf("%d", c);


}