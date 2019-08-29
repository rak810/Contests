#include<stdio.h>
#include<math.h>

long long int div(long long int num)
{
	long long int k = 1, count = 0, sq;
	sq = sqrt(num);
	for(k = 1; k<sq; k++)
	{
		if(num%k == 0)
		{
			count += 2;
		}
	}

	if(sq*sq == num)
	{
		count--;
	}

	return(count);

	
}


int main()
{
	long long int i = 0, j = 1;

	for(i = 0; ; )
	{
		i = i+j;
		j++;
		if(div(i) > 500)
		{
			break;
		}

	}

	printf("%lld\n", i);

	

}