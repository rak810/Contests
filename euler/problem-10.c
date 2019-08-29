#include<stdio.h>
#include<math.h>

long int prime(long int x)
{
	long int i = 0,res = 0,q;
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
	long int i = 2, sum = 0;

	for(i = 2; i < 2000000; i++)
	{
		if(prime(i) == 1)
		{
			sum = sum+i;
		}
	}

	printf("sum : %ld\n", sum );
}