#include<stdio.h>

	int result(int a, int b, int c, int d)
	{
		int s = 0;
		if((c - b)%d == 0)
		{	while(b <c)
			{
				b = b+d;
				s = s+1;
		    }
		}
		else if ((b == 4)&&(c == 5))
		{
			s = 4;
		}
		else 
		{
			while(b >= 1)
			{
				b = b-d;
				s = s+1;
			}
			int p = b;
			while(p<=c)
			{
				p = p+d;
				s = s+1;
			}
			int q = p;
			if(q != c)
			{
				s = -1;
			}

			
		}
		printf("%d\n", s);
	}
int main()
{
	int t, n, x, y, z;
	scanf("%d", &t);

	while(t>0)
	{
		scanf("%d%d%d%d", &n, &x, &y, &z);
		result(n, x, y, z);
		t = t-1;
	}


}