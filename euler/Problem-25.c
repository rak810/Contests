#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

long long int fib(float n)
{
	float psi = 1.618034;
	float ps = 1 - 1.618034;
	long long int v = (pow(psi, n)%1000 - pow(ps, n)%1000)/sqrt(5);

	return(v);
} 

int count(long long int x)
{
	/*int i = 0,s;
	while(x != 0)
	{
		s = x%10;
		i++;
		x = x/10;
	}

	return(i);*/
	char str[1002];
	sprintf (str, "%lld", x);
	int n = strlen(str);
	return(n);
}

int main()
{
	long long int i = 1, a, n;
	//scanf("%lld", &n);

	/*for(i = 1; ;i++)
	{
		a = fib(i);
		if(count(a) == n)
		{
			break;
		}

	}*/

	a = fib(200);
	int b = count(a);
	printf("%lld\n", a);
	printf("%d\n", b);
}