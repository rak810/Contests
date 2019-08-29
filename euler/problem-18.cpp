#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

int main()
{
	ifstream file;
	int k = 0;
	file.open("pro-18.txt");
	string str,word;
	std::vector<std::vector<int>> row;
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

	
	int rownum = 0;
	for (int i = row.size()-2; i >= 0; i--)
	{
		for (int j = 0; j < row[i].size(); j++)
		{
			row[i][j] = row[i][j] + max(row[i+1][j],row[i+1][j+1]);
		}
	}
	int sum = row[0][0];
	cout << sum << endl;

}