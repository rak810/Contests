#include<iostream>
#include<string>

using namespace std;

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	int n, t, i = 0;
	cin >> n >> t;

	string a;
	cin >> a;

	for (int j = 0; j < t; ++j)
	{
		while (i <= n-1)
		{
			if(a[i] == 'B' && a[i+1] == 'G')
			{
				swap(&a[i], &a[i+1]);
				i=i+2;
			}
			else
			{
				i++;
			}
		}
		i = 0;
	}

	cout << a << endl;
}

