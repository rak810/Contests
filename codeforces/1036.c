#include<stdio.h>


int main()
{
	long int n, k;
	scanf("%ld%ld", &n, &k);

	int j = (n+k-1)/n;
	printf("%d\n", j);

	return 0;

}