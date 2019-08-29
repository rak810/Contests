#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char a[201];
	scanf("%s", &a[201]);
	int n = strlen(a);
	int i = 0;
	for(i = 0; i<n; i++)
	{
		if((a[i]=='W') && (a[i+1]=='U') && (a[i+2]=='V'))
		{
			a[i] = a[i+1] = a[i+2] = ' ';
		}
	}

	for(i = 0; i<n; i++)
	{
		printf("%c", a[i]);
	}
}