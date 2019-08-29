#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>

using namespace std;


int main()
{
	ifstream file;
	int k = 0;
	file.open("pro-11.txt");
	string str,word;
	std::vector< std::vector<int> > row;
	std::vector<int> v;
	while(getline(file, str))
	{
		stringstream s(str);
		while(getline(s,word, ' '))
		{
			int x = stoi(word);
			v.push_back(x);
		}
		row.push_back(v);
		v.clear();
	}
	file.close();

	int max = 0;
	/*for (int i = 0; i < row.size(); ++i)
	{
		for (int j = 0; j < row[i].size(); ++j)
		{
			int x = row[i][j]*row[i][j+1]*row[i][j+2]*row[i][j+3];
			if(x > max)
			{
				max = x;
			}
		}
	}*/

	for (int i = 0; i < row.size(); ++i)
	{
		for (int j = 0; j < row[i].size(); ++j)
		{
			int x = row[j][i]*row[j][i+1]*row[j][i+2]*row[j][i+3];
			if(x > max)
			{
				max = x;
			}
		}
	}

	/*for (int i = 0; i < row.size(); ++i)
	{
		for (int j = 0; j < row[i].size(); ++j)
		{
			int x = row[i][j]*row[i+1][j+1]*row[i+2][j+2]*row[i+3][j+3];
			if(x > max)
			{
				max = x;
			}
		}
	}*/

	cout << max << endl;


}