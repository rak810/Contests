#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


using u64 = uint64_t;
using u128 = __uint128_t;

u64 binpower(u64 base, u64 e, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

bool check_composite(u64 n, u64 a, u64 d, int s) {
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
};

bool MillerRabin(u64 n) { // returns true if n is prime, else returns false.
    if (n < 2)
        return false;

    int r = 0;
    u64 d = n - 1;
    while ((d & 1) == 0) {
        d >>= 1;
        r++;
    }

    for (int a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}


vector<int> SubStrGen(string str)
{
	vector<int> v;
	string revstr = str;
	reverse(revstr.begin(), revstr.end());
	for (int i = 0; i < str.size(); ++i)
	{
		string temp = str.substr(0, i+1);
		v.push_back(stoi(temp));
		temp = revstr.substr(0, i+1);
		if(temp != revstr)
		{
			v.push_back(stoi(temp));
		}
		
	}
	return v;
}

vector<int> SieveOfAtkin(int limit) 
{ 
   	bool v[limit];
    std::vector<int> temp;
    std::vector<int> a = {1,13,17,29,37,41,49,53};
    std::vector<int> b = {7,19,31,43};
    std::vector<int> c = {11,23,47,59};
    int x, y, n;

    for (int i = 0; i < limit; ++i)
    {
    	v[i] = false;
    }

    v[2] = true;
    v[3] = true;
    for(x = 1; x < sqrt(limit)+1; x++)
    {
    	for(y = 1; y < sqrt(limit)+1; y++)
    	{
    		n = (4 * x * x) + (y * y);
    		if(n <= limit && ((n%12 == 1) || (n%12 == 5)))
    		{
    			v[n] = !v[n];
    		}
    		n = (3 * x * x) + (y * y);
    		if(n <= limit && (n%12 == 7))
    		{
    			v[n] = !v[n];
    		}
    		n = (3 * x * x) - (y * y);
    		if(x > y && n <= limit && (n%12 == 11))
    		{
    			v[n] = !v[n];
    		}
    	}
    }

    for (int i = 5; i < sqrt(limit)+1; ++i)
    {
    	if(v[i])
    	{
    		for (int j = i * i; j < limit; j+=i*i)
    		{
    			v[j] = false;
    		}
    	}
    }

    for (int i = 1; i < limit; ++i)
    {
    	if(v[i])
    	{
    		temp.push_back(i);
    	}
    }

    return temp;

} 


int main()
{
	
	int count = 0, sum = 0;
	int i = 11;

	for (i; ; i+=2)
	{
		int k = 0;
		vector<int> v = SubStrGen(to_string(i));
		std::vector<int >  p = SieveOfAtkin(i+2);
		for (int j = 0; j < v.size(); j++)
		{
			if(binary_search(p.begin(), p.end(), v[j]))
			{
				k++;
			}
		}
		if(k == v.size())
		{
			count++;
			cout << i << endl;
			sum+=i;
		}
		if(count == 8)
		{
			break;
		}
		
	}

	cout << sum << endl;
}