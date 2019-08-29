#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define MAX 28123
using namespace std;

int SumOfPropDiv(int a)
{
	int sum = 1;
	for (int i = 2; i < a; ++i)
	{
		if(a%i == 0)
		{
			sum = sum + i;
		}
	}
	return sum;
}

bool AbundantCheck(int num, int pr)
{
	if(num < pr)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	std::vector<int> v;
	int ar[MAX+1] = {0};
	cout << "i\tx"<< endl;
	for (int i = 1; i < MAX; ++i)
	{
		int x = SumOfPropDiv(i);
		if(AbundantCheck(i, x))
		{
			cout << i << '\t' << x << endl;
			v.push_back(i);
		}
	}

	long long sum = 0;
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = i; j < v.size(); ++j)
		{
			if(v[i] + v[j] <= MAX)
			{  
				int x = v[i] + v[j];
				ar[x] = 1;
			}
		}
	}

	for (int i = 1; i < MAX+1; ++i)
	{
		if(ar[i]!=1)
		{
			sum+=i;
		}
	}

	cout << sum << endl;



}

