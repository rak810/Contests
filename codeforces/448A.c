#include<stdio.h>

int main()
{
	int a[3], b[3], n, i = 0, s = 4, c = 9;

	for(i = 0; i<3; i++)
	{
		scanf("%d", &a[i]);
		s = s+a[i];
	}

	for(i = 0; i<3; i++)
	{
		scanf("%d", &b[i]);
		c = c+b[i];
	}
	scanf("%d", &n);

	int k = s/5;
	int j = c/10;

	if(k+j <= n) 
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}