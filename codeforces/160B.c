#include<stdio.h>
#include<stdlib.h>

void traverse(int a[], int N)
{
	for (int i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int maximum(int a[], int N)
{
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return(max);
}

void QuickSort(int a[], int b[], int N, int k)
{
	int c[k];
	int i = 0;
	for (i = 0; i < k; i++)
	{
		c[i] = 0;
	}

	for (i = 0; i < N; i++)
	{
		c[a[i]] = c[a[i]] + 1;
	}

	for (i = 1; i < k; i++)
	{
		c[i] = c[i] + c[i - 1];
	}
	
	i = N-1;
	while(i >= 0)
	{
		b[c[a[i]] - 1] = a[i];
		c[a[i]] = c[a[i]] - 1;	
		i--;
	}
}

int main()
{
	int n, k, num, res = 0, r = 0;
	scanf("%d", &n);
	scanf("%d", &num);
	int a[2*n], ar[n],arr[n], out[n], o[n];

	for (int i = 2*n - 1; i >= 0; i--)
	{
		int rem = num%10;
		a[i] = rem;
		num = num/10;
	}


	for(int i = n; i < 2*n; i++)
	{
		ar[i-n] = a[i];
		arr[i-n] = a[i-n];

	}

	k = maximum(ar, n) + 1;

	QuickSort(ar, out, n, k);


	for (int i = 0; i < n; ++i)
	{
		if(arr[i] != out[i])
		{
			if(arr[i] < out[i])
			{
				res = res+1;
			}
			else if(arr[i] > out[i])
			{
				r++;
			}
		}
	}

	if(res == n || r == n)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}


}