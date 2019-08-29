#include<iostream>
#include<cstdlib>


using namespace std;

struct laptop {

	int price;
	int quality;

};


int main()
{
	int n, c = 0;
	cin >> n;
	laptop lap[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> lap[i].price;
		cin >> lap[i].quality;
		if(lap[i].price != lap[i].quality)
		{
			c++;
		}
	}
	
	
	if(c == 0)
	{
		cout << "Poor Alex" << endl;
	}
	else
	{
		cout << "Happy Alex" << endl;
	}

}