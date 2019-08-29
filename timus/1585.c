#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
	int n, i = 0, m[3] = {0, 0, 0}, tmp, max = 0;
	scanf("%d", &n);
	char penguin[20];

	for (i = 0; i < n; ++i)
	{
		scanf("%s", &penguin[20]);	
		if(penguin[0] == 'E')
		{
			m[0]++;
		}
		else if(penguin[0] == 'M')
		{
			m[1]++;
		}
		else if(penguin[0] == 'L')
		{
			m[2]++;
		}

	}

	for (i = 0; i < 3; ++i)
	{
		if(m[i] > max)
		{
			max = m[i];
			tmp = i;
		}
	}

	if(tmp == 0)
	{
		printf("Emperor Penguin\n");
	}
	else if(tmp == 1)
	{
		printf("Macaroni Penguin\n");
	}
	else
	{
		printf("Little Penguin\n");
	}

}