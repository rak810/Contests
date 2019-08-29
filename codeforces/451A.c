#include<stdio.h>

int main()
{
	int n[2], min = 1000;
	for(int i = 0; i<2; i++)
	{
		scanf("%d", &n[i]);
		if (n[i] < min)
		{
			min = n[i];
		}
	}

	if (min%2 == 0)
	{
		printf("Malvika\n");
	}
	else
	{
		printf("Akshat\n");
	}

	return 0;

}