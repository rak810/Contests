#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n, i = 0;
	char c[100];
	scanf("%s", &c[100]);
	n = strlen(c);

	int pos(char b[], char d, int m)
	{
		int i = 0, p = 0;

		for(i = 0; i<m; i++)
		{	
			p = p+1;
			if(b[i] == d)
			{
				break;
			}
		}
		return(p);
	}

	int res( char z[], char x, int j, int k)
	{	
		int r = 0;
		for(j; j<k; j+4)
		{
			if(z[j] != x)
			{
				r = r+1;
			}
		}
		return(r);
	}
	int k = 0, y = 0;
	switch(1){
		case 2 :
			y = pos(c, 'R', n);
			if (y > 4)
			{
				k = y-4;
			}
			else
			{
				k = y;
			}
			printf("%d ", res(c, 'R', k, n));

		case 3 :
			y = pos(c, 'B', n);
			if (y > 4)
			{
				k = y-4;
			}
			else
			{
				k = y;
			}
			printf("%d ", res(c, 'B', k, n));

		case 4 :
			y = pos(c, 'R', n);
			if (y > 4)
			{
				k = y-4;
			}
			else
			{
				k = y;
			}
			printf("%d ", res(c, 'Y', k, n));

		case 5 :
			y = pos(c, 'G', n);
			if (y > 4)
			{
				k = y-4;
			}
			else
			{
				k = y;
			}
			printf("%d ", res(c, 'G', k, n));

	}

}