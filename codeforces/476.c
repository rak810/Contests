#include<stdio.h>

int main()
{
	int m, n, c, j = -1;
	scanf("%d%d", &n, &m);
	
	c = (n+1)/2;
	
	for (c; c<=n; c++)
	{
		if(c%m == 0)
		{
			j = c;
			break;
			
	}
	
	printf("%d\n", j);
	
	
}
