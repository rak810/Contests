#include<stdio.h>

int main()
{
	int n, i = 0, c = 0;
	scanf("%d", &n);
	char s[n];

	for(i = 0; i<=n; i++)
	{
		scanf("%c", &s[i]);
	}

	for(i = 0; i<=n; i++)
	{
		if(s[i] == 'A')
		{
			c++;
		}
	}
	int d = n - c;

	if(c>d)
	{
		printf("Anton\n");
	}
	else if(c<d)
	{
		printf("Danik\n");
	}
	else
	{
		printf("Friendship\n");
	}

}