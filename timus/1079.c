#include<stdio.h>


int max(int k)
{
	int ar[k+1];

	ar[0] = 0;
	ar[1] = 1;

	for (int i = 2; i < k+1; )
	{
		ar[i] = ar[i/2];
		ar[i+1] = ar[i/2] + ar[i/2 + 1];
		i = i+2;
	}

	int m = 0;
	for (int i = 0; i < k+1; ++i)
	{
		if(ar[i] > m)
		{
			m = ar[i];
		}
	}

	return(m);
}
int main()
{
	int n, tmp;
	while(1)
	{
		scanf("%d", &n);

		if(n == 0)
		{
			break;
		}
		else
		{
			tmp = max(n);
			printf("%d\n", tmp);
		}
	}



}