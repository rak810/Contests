#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ifstream file;
	vector<string> v;
	vector<int> temp;
	string str;
	file.open("pro-13.txt");

	while(getline(file, str))
	{
		v.push_back(str);
	}
	file.close();

	int k = 49, res = 0, i = 0;

	while(i <= 51)
	{
		for (int j = 99; j >= 0; j--)
		{
			if(k>=0)
			{
				res += (v[j][k] - '0');
			}
		}
		temp.push_back(res%10);
		res = res/10;
		k--;
		i++;
	}

	for (int z = temp.size()-1; z>=0; z--)
	{
		cout << temp[z];
	}
	cout << endl;
}