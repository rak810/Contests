#include<stdio.h>

int main()
{
	int a, b, x, c = 0;
	scanf("%d%d", &a, &b);
	int i = 0;
   
	for(i = 0; i< a; i++)
	{
		scanf("%d", &x);
		if(x > b)
		{
			c = c+2;
		}
		else
		{
			c = c+1;
		}
	}
	printf("%d\n", c);
}