#include<stdio.h>
#include<stdlib.h>

void input(int a[], int N)
{
	int num;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		a[i] = num;
	}
}

int sum(int a[], int N)
{
	int s = 0;
	for(int i = 0; i < N; i++)
	{
		s = s+a[i];
	}

	return(s);
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
	int n, count = 0, r = 0;
	scanf("%d", &n);
	int array[n];
	int out[n];
	input(array, n);
	int s = sum(array, n) / 2 + 1;
	int max = maximum(array, n) + 1;
	QuickSort(array, out, n, max);

	for(int i = n-1; i >= 0; i--)
	{
		 r = r + out[i];
		 count++;
		 if(r >= s)
		 {
		 	break;
		 }
	}

	printf("%d\n", count);


}