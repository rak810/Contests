#include<stdio.h>

int main()
{
	long long int  i  = 0, n;
	scanf("%lld", &n);
	long long int a[n], c[n];

	for(i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}

	long long int max = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	long long int check(long long int b[],long long int m,long long int d)
	{
		long long int i = 0, k =0;
		for(i = 0; i < d; i++)
		{
			if((b[i] == m) || (b[i] == 1))
			{
				k = 1;
			}
		}
		return(k);

	}

    long long int j = 0, s = 1,k;
	while(k < max)
	{
		k = (j+1)+s;
		s = k;
		j=j+1;
		long long int p = check(a, k, n);
		printf("%lld\n", p);
	}
	

}
















































































































































