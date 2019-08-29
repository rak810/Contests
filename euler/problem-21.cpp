#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

int SumOfPropDiv(int a)
{
	int sum = 1;
	for (int i = 2; i < sqrt(a)+1; ++i)
	{
		if(a%i == 0)
		{
			sum = sum + i + a/i;
		}
	}
	return sum;
}

int main()
{
	int sum = 0;
	for (int i = 1; i < 10000; ++i)
	{
		int res = SumOfPropDiv(i);
		if(SumOfPropDiv(res) == i && res > i)
		{
			cout << i << "\t" << res << endl;
			sum = sum + i + res;
		}
	}

	cout << sum << endl;
}



 
