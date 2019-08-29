#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, m, c = 0, c1 = 0, c2 = 0, k1 = 0, k2 = 0;
	cin >> n >> m;
	int chests[n], keys[m];

	for (int i = 0; i < n; ++i)
	{
		cin >> chests[i];
		if(chests[i]%2 == 0)
			c2++;
		else
			c1++;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> keys[i];
		if(keys[i]%2 == 0)
			k2++;
		else
			k1++;
	}

	c = min(k1,c2) + min(k2,c1);

	cout << c << endl;
}