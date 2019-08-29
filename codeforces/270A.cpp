#include<iostream>
#include<cmath>

using namespace std;

bool IsDivisible(long val)
{
	long lim = sqrt(val)+1;
	bool x = false;
	for (int i = 2; i < lim; ++i)
	{
		if(val%i == 0)
		{
			x = true;
			break;
		}
	}
	return x;
}

int main()
{
	long n, x;
	cin >> n;

	for (int i = 4; i < n;)
	{
		x = n-i;
		if(IsDivisible(x))
		{
			cout << i << " " << x << endl;
			break;
		}
		i+=2;
	}
}