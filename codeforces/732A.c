#include<stdio.h>

int main()
{
	int k, r, i = 1;
	scanf("%d%d", &k, &r);

	while(i>0)
	{
		if(((i*k)%10 == 0)|| ((i*k)%10 == r))
		{
			break;
		}
		i++;
	}

	printf("%d\n", i);
}