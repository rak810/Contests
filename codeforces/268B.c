#include<stdio.h>

int main()
{
	int n, i = 1, sum=0, result;
	scanf("%d", &n);
	for(i = 1; i<=n; i++)
	{
		sum = sum+ ((n-i)*i);
	}
	
	result = sum + n;
	
	printf("%d\n", result);
	return 0;
}	
