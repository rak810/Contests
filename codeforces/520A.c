#include<stdio.h>
#include<string.h>

char tolow(int a)
{ 
	char c;
	if((a >= 65)&&(a <= 90))
	{
		c = a+32;
	}
	else
	{
		c = a;
	}
		
	return(c);

}

int main()
{	
	int n, i = 0;
	scanf("%d", &n);
	char b[n];
	char x[27] = "abcdefghijklmnopqrstuvwxyz";
	while(n>0)
	{
		scanf("%c", &b[i]);
		i = i+1;
		n = n-1;
	}

	for(i =0; i<=n; i++)
	{
		b[i] = tolow(b[i]);
	}

	int result(char z[],char k)
	{	
		int r = 0;
		int j = strlen(z);
		for(int i =0; i<=j; i++)
		{
			if(z[i] == k)
			{
				r = 1;
				break;
			}
		}
		return(r);
	}
	printf("%s\n", b);
	for(i = 0; i<27;i++)
	{
		if(result(b, x[i]) == 0)
		{
			break;
			printf("NO\n");
		}
		
	}


	
}