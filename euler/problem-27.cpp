#include<iostream>
#include<cstdlib>
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
	std::vector<int> v;
	v = SieveOfAtkin(1000);
	int a, b, btemp, aMax = 0, bMax = 0, max = 0, n;

	for (a = -999; a<0; a+=2)
	{
		for (b = 0; b < v.size(); b++)
		{
			n = 0;
			btemp = v[b];
			while(MillerRabin(abs(n*n + a*n + btemp)))
			{
				n++;
			}
			if(n > max)
			{
				max = n;
				aMax = a;
				bMax = btemp;
			}
		}
	}

	cout << "a : " << aMax << endl;
	cout << "b : " << bMax << endl;
	cout << "result : " << aMax*bMax << endl;
}


