#include<stdio.h>
#include<math.h>

void DecToBin(long long int num, int a[], int N)
{
	int i = N-1, rem;
	while(num != 0)
	{
		rem = num%2;
		num = num/2;
		a[i] = rem;
		i--;
	}

}

void filler(int a[], int N)
{
	for(int i = 0; i < N; i++)
	{
		a[i] = 0;
	}
}

void display(int a[], int N)
{
	for (int i = 0; i < N; ++i)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int main()
{
	long long int i,n,k;
	scanf("%lld%lld", &n, &k);
	int ar[n];
	long long int lim = pow(2, n);
	filler(ar, n);

	if(k > n)
	{
		printf("-1\n");
	}
	else
	{
		for(i = 1; i < lim; i++)
		{
			DecToBin(i-1, ar, n);
			if(i == k)
			{
				display(ar, n);
				break;
			}
		}
	}
	


	
}