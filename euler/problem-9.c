#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a = 1, b = 1, c = 1, s = 1000;
	bool i = false;

	for(a = 1; a < (s/3); a++)
	{
		for(b = a; b<(s/2); b++)
		{
			c = s - a - b;
			if(a*a+b*b == c*c)
			{
				i = true;
				break;
			}
		}

		if(i)
		{
			break;
		}
	}

	int p = a*b*c;


	printf("a : %d b : %d c : %d\n", a, b, c);
	printf("product : %d \n", p );
}
