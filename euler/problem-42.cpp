#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<iterator>
#include<map> 
#include<vector>
#include<sstream>
#include <algorithm>

using namespace std;


std::map<char, int> alph;
void MapInput()
{
	char c = 'A';

	for (int i = 1; i <= 26; ++i)
	{
		alph.insert(pair<char, int>(c, i));
		c++;
	}
}

string trim(string w)
{
	string st ;
	for (int i = 0; i < w.size(); ++i)
	{
		if(w[i] != '"')
		{
			st = st+w[i];
		}
	}
	return st;
}

int count(string w)
{
	int s = 0;
	for (int i = 0; i < w.size(); ++i)
	{
		s = s+alph.find(w[i])->second;
	}
	return(s);
}

int main()
{
	MapInput();
	ifstream file;
	file.open("pro-42.txt");
	std::vector<string> v;
	std::vector<int> iv;
	string str, word;
	while(getline(file, str))
	{
		stringstream s(str);
		while(getline(s,word, ','))
		{
			string y = trim(word);
			v.push_back(y);
		}
	}
	file.close();

	for(auto i = v.begin(); i != v.end(); i++)
	{
		int z = count(*i);
		iv.push_back(z);
	}

	sort(iv.begin(), iv.end());
	int x = iv[iv.size()-1];
	std::vector<int> t;
	for (int i = 1; ; ++i)
	{
		int val = (i*(i+1))/2;
		t.push_back(val);
		if(val>x)
		{
			break;
		}
	}

	int cnt = 0;
	for (int i = 0; i < iv.size(); ++i)
	{
		if(binary_search(t.begin(), t.end(), iv[i]))
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}