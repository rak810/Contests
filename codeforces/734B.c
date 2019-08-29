#include<stdio.h>

int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);

	int min( int i, int j)
	{
		if (i < j)
			return(i);
		else
			return(j);
	}

	int x = min(a, min(c,d));

	int y = min(b, (a-x));

	int sum = 256*x + 32*y;

	printf("%d\n", sum);


	
}