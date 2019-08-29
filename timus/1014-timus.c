#include<stdio.h>

int main()
{
	int n, i=1, j=1,p;
	scanf("%d", &n);
	
	for (i; ;i++)
	{
		p = i;
		while(p>0)
		{
			p = p/10;
			j = j*(p%10);
		}
		
		if (j == n)
			printf("%d", p);
			break;
	}
	
	return 0;
}
		
			
