#include<stdio.h>
#include<math.h>

int test(long long int p)
{
	long long int n = sqrt(8*p-7)/2;
	int res = 0;

	if((n*(n+1)/2) == p)
	{
		res = 1;
	}

	return(res);
}

int main()
{
	long long int m;
        int n;
	scanf("%d", &n);
        int a[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%lld", &m);
		int temp = test(m);
		a[i] = temp;
	}

    for(int i = 0; i<n; i++)
    {
         printf("%d ", a[i]);

    }

}
    