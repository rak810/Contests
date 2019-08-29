#include<stdio.h>


int main()
{
	int n, i = 1, res, num, check = 1;
	scanf("%d", &n);
	if(n == 0)
	{
		num = 10;
		check = 1;
	}
	else if (n < 10)
	{
		num = n; 
		check = 1;
	}

	for (int i = 1; i < n; i++)
	{

		if(n%i == 0 && i > 1)
		{
			num = i*10 + n/i;
			check = 1;
			break;
		}
		else
		{
			n = n
		}

		
	}

	if(check == 1)
		printf("%d\n", num);
	else
		printf("-1\n");
}