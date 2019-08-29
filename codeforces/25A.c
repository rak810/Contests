#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n, i=0,count = 0, result = 0, k=1;
	int *a;
	scanf("%d\n", &n);

	a = malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count++;
		}
		else
		{
			result++;
		}
	}

	if (count==1)
	{
		for (i = 0; i < n; i++)
		{
			if (a[i]%2==0)
			{
				break;
			}
			k++;
		}
	}
	else if (result==1)
		{
			for (i = 0; i < n; i++)
			{
				if (a[i]%2!=0)
				{
					break;
				}
				k++;
			}
		}


     printf("%d\n", k);
     return 0;

}