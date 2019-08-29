#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

template<typename T> 
T DecToBin(int n) 
{ 
    if (n == 0) 
        return "0"; 
    string bin = "";     
    while (n > 0)     
    { 
        bin = ((n & 1) == 0 ? '0' : '1') + bin; 
        n >>= 1; 
    } 
    return bin; 
} 


int main ()
{
	long sum = 0;
	for (int i = 1; i < 1000000; ++i)
	{
		string x = to_string(i);
		string y = DecToBin<string>(i);
		string revx = x;
		string revy = y;
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());
		if(revx == x && revy == y)
		{
			sum += i;
		}
	}

	cout << sum << endl;

}