#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


int main(int argc, char const *argv[])
{
	string v;
	int i = 1,count = 0, sum = 1;
	for(i; ;i++)
	{
		string x = to_string(i);
		v+=x;
		if(v.size() >= 1000000)
		{
			break;
		}
	}




	int x = v[9] - '0';
	int y = v[99] - '0';
	int z = v[999] - '0';
	int a = v[9999] - '0';
	int b = v[99999] - '0';
	int c = v[999999] - '0';

	cout << x*y*z*a*b*c<<endl;

	return 0;
}