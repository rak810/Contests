#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


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

std::vector<int> printRotatedString(string str) 
{ 
	std::vector<int> v;
    int len = str.size(); 
    char temp[len]; 
    for (int i = 0; i < len; i++) 
    { 
        int j = i; 
        int k = 0;  
        while (str[j] != '\0') 
        { 
            temp[k] = str[j]; 
            k++; 
            j++; 
        } 
        j = 0; 
        while (j < i) 
        { 
            temp[k] = str[j]; 
            j++; 
            k++; 
        } 
  
        v.push_back(stoi(temp));
    } 
    return v;
} 

int main()
{
	int count  = 0;
	std::vector<int> primeVector = SieveOfAtkin(1000000);

	for (int i = 0; i < primeVector.size(); ++i)
	{
		int k = 0;
		string x = to_string(primeVector[i]);
		std::vector<int > temp = printRotatedString(x);
		for (int j = 0; j < temp.size(); ++j)
		{
			if(binary_search(primeVector.begin(), primeVector.end(), temp[j]))
			{
				k++;
			}
		}
		if(k == temp.size())
		{
			count++;
		}
	}

	cout << count << endl;
}