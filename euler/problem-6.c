/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0, sum = 0, res = 0, dif;
	
	for(i = 0; i<=100; i++)
	{
		sum = sum+i;
		res = res + (i*i);
	}
	
	dif = (sum*sum)-res;
	
	printf("%d and %d and %d\n", sum, res, dif);
	return 0;	
}



