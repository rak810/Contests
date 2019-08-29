#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

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

int Rec(int val)
{
	cout << val << endl;
	int i = 1, x;
	string s, temp;
	std::vector<string> v;
	v.clear();
	while((i!=0)&&(!binary_search(v.begin(), v.end(), to_string(x))))
	{
		i *= 10;
		x = i/val;
		s+=to_string(x);
		i = i%val;
		v.push_back(s);
	}
	return v.size();
}

int rect(int val)
{
    int i = 1, x;
    std::vector<int> v;
    std::vector<int> temp;
    while((i!=0)&&(!binary_search(temp.begin(), temp.end(), i)))
    {
        temp.push_back(i);
        i *= 10;
        if(i < val)
        {
            i *= 10;
            v.push_back(0);
        }
        x = i/val;
        i = i%val;
        cout << x << endl;
        v.push_back(x);
    }

    std::vector<int>::iterator it;
    if(i!= 0)
    {
        it = find(temp.begin(), temp.end(), i);
        cout << it-temp.begin() << endl;
        return(v.size() - (it-temp.begin()));
    }
    else
    {
        return(v.size());
    }

}

int main()
{
	int max = 0, temp = 0, y;


    cout << rect(12);
	/*for (int i = 2; i <= 1000; i++)
    {
       temp = rect(i);
       cout << temp << endl;
       if(temp>0)
       {
            y = i;
            max = temp;
       }
    }

	cout << y << endl;*/

}