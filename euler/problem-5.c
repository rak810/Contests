/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<stdio.h>

int main()
{
	int mul_check(int n)
	{
		int i = 0, sum = 0, k = 0;
		
		for(i = 1; i < 20; i++)
		{
			k = n%i;
			sum = sum + k;
		}
			
		return(sum);
	}	
	
	
	int i = 2000;
	
	while(i>0)
	{	
		i = i+1;
		if (mul_check(i) == 0)
		{
			break;
		}
	}
			
	printf("%d\n", i);
	return 0;
}
	
