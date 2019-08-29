#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
	if(a > b)
	{
		return(a);
	}
	else
	{
		return(b);
	}
}

int main()
{
	int i = 0, n, m = 0, count = 0;
	scanf("%d", &n);
	int a[n];
	
	for(i = 0; i<n; i++)
	{
		scanf("%d", &a[i]);
	} 
	
	for(i=0;i<n-1;i++)
	{
		if(a[i]<=a[i+1])
		{
			count++;
		}
		else
		{
			m = max(m, count);
			count = 0;
		}
	}
	m = max(m, count);
	printf("%d\n", m+1);
}
