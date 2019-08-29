#include<stdio.h>
#include<math.h>

int main()
{
	unsigned long long m, s, i=0,k = 0;
	scanf("%llu%llu", &m, &s);
	unsigned long long n = pow(10,(m-1));
	unsigned long long x = pow(10,m);

    unsigned long long check(unsigned long long y)
    {
    	unsigned long long n, sum = 0;
    	while(y>0)
    	{
    		n = y%10;
    		sum = sum+n;
    		y = y/10;
    	}
    	return(sum);
    }

	for(i=n; i<x; i++)
	{
		if(check(i) == s)
		{
			break;
		}

	}

	for(k=x; k>n; k--)
	{
		if(check(k) == s)
		{
			break;
		}
	}

	
	if((i == x)&&(k == n))
		printf("-1 -1\n");
	else
		printf("%llu %llu\n", i, k);
	return 0;
}