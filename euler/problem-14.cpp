#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;



int main()
{
	int max = 0, num = 0;
	long seq;
	int a[1000000];
	for (int i = 0; i < 1000000; ++i)
	{
		a[i] = -1;
	}

	a[1] = 1;

	for (int i = 2; i < 1000000; ++i)
	{
		seq = i;
		int count = 0;
		while(seq != 1 && seq >= i)
		{
			count++;
			if(seq%2 == 0)
			{
				seq = seq/2;
			}
			else
			{
				seq = 3*seq + 1;
			}
		}
		a[i] = count+a[seq];

		if(a[i] > max)
		{
			max = a[i];
			num = i;
		}
	}

	cout << max << endl;
	cout << num << endl;
}