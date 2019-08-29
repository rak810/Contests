#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int rev_num(int num)
	{
		int rev=0, j;
		while (num > 0)
		{
			j = num%10;
			rev = rev*10 + j;
			num = num/10;
		}
		return(rev);
	}

	int temp=0,i = 999,k, max=0;
	
	while(i > 0)
	{   
		temp = i*k;
		i = i-1;
		k = k+1;
		if(temp==rev_num(temp))
			break;
	}		
	printf("%d\n", temp);
	return 0;
}
