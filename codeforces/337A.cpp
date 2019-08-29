#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	sort(a, a+n);

	int bs = 1000;

	for (int i = 0; i <= n-m; ++i)
	{
		
		bs = min(bs, a[m+i-1] - a[i]);
	}

	cout << bs << endl;
}