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

void MapInput()
{
	char c = 'A';

	for (int i = 1; i <= 26; ++i)
	{
		alph.insert(pair<char, int>(c, i));
		c++;
	}
}

long count(string w, int ser)
{
	long s = 0;
	for (int i = 0; i < w.size(); ++i)
	{
		s = s+alph.find(w[i])->second;
	}

	s = s*ser;
	return(s);
}

int main()
{
	MapInput();

	ifstream file;
	file.open("p022_names.txt");
	std::vector<string> v;
	string str, word;
	while(getline(file, str))
	{
		stringstream s(str);
		while(getline(s,word, ','))
		{
			v.push_back(trim(word));
		}
	}
	file.close();

	sort(v.begin(), v.end());

	int n = 1;
	long sum = 0;
	for (auto i = v.begin(); i !=v.end(); ++i)
	{
		sum = sum + count(*i, n);
		n++;
	}
	
	cout << n << endl;
	cout << sum << endl;

}
