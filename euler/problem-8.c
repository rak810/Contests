#include<stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("pro-8.txt", "r");
	char c = getc(fp);

	long int max = 0, sum = 1, a[1001], i = 0;

	while(c != EOF)
	{
		if(c != '\n')
		{
			int x = c - '0';
			a[i] = x;
			i++;
		}
		c = getc(fp);
	}

	for(i = 0; i < 988; i++)
	{
		for (int j = i; j < i+13; j++)
		{
			sum = sum*a[j];
		}
		if(sum > max)
		{
			max = sum;
		}
		sum = 1;
	}
	//printf("\n");
	printf("result : %ld\n", max);


	fclose(fp);
	
	return 0;



}