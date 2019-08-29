#include<stdio.h>
#include <inttypes.h>
int main()
{
	long long int n;
	scanf("%I64d", &n);
	
	long long int check(long long int m)
	{
		long long int j, c = 0, ans = 1, cnt = 0,s = 0;
		while(m>0)
		{
			j = m%10;
			if (j == 4) 
			{
				c++;
			}
			else if(j == 7)
			{
			 	s++;
			}
			m = m/10;
			cnt++;
		}
		if(((c+s) != cnt)||(c != s))
			ans = 0;
			
		return(ans);
	}
	
	
	while(n>0)
	{
		if(check(n) == 1)
		{
			break;
		}
		n++;
	}
	
	printf("%I64d\n", n);
	return 0;	
	
}
	




