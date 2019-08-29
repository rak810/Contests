#include<stdio.h>

int position(long long int val)
{
	long long int j = 1, i = 0;

	while(j < val+10)
	{
		long long int temp = j;
		j = j+ i;
		i++;
		if(val > temp && val < j)
		{
			return 0;
			break;
		}
		else if(val == j)
		{
			return 1;
			break;
		}

	}
}


int main()
{
	long long int n, j = 1, i = 0, k;
	scanf("%lld", &n);
    
	for (long long int i = 0; i < n; ++i)
	{
		scanf("%lld", &k);
		int temp = position(k);
		printf("%d\n", temp);
	}

}