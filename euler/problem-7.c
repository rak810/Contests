#include<stdio.h>
#include<math.h>

int prime(int x)
{
	int i = 0,res = 0,q;
	q = sqrt(x);

	if((x == 2) || (x == 3))
	{
		res = 1;
	}
	else
	{
		for(i = 2; i<=q; i++)
		{
			if(x%i!=0)
			{
				res = 1;
			}
			else
			{
				res = 0;
				break;
			}
		}
	}
	return(res);
}

int main()
{
	int n = 1, j = 2,c = 0,d;
	scanf("%d", &d);

	while(n>0)
	{
		if(prime(j) == 1)
		{ 
			c++;
			printf("%d : %d\n", c, j);
			if(c == d)
			{
				break;
			}
		}
		n++;
		j++;
	}

}