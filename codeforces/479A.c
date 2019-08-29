#include<stdio.h>

int main()
{
	int a, b, c, ar[4], max = 0, i = 0;
	scanf("%d%d%d", &a, &b, &c);

	ar[0]=a*(b+c);
	ar[1]=(a+b)*c;
	ar[2]=a*b*c;
	ar[3]=a+b+c;

	for(i = 0; i<4; i++)
	{
		if(ar[i]>max)
		{
			max = ar[i];
		}
	}

	printf("%d\n", max);

}