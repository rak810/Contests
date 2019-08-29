#include<stdio.h>
#include<string.h>

int main()

{
	char a[100], b[100], c[100];
	scanf("%s%s%s", a, b, c);
	
	int s,m,r;
	
	
	int count(int i, char x[100])
	{
		int j=0,s, c = 0;
		s = strlen(x);
		for(j = 0; j<s; j++)
		{
		 	if(x[j] == i)
		 	{
		 		c++;
		 	}
		}
	}
	
	
	
	
	
	
}
