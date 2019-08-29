#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string multiply(string num1, string num2) 
{ 
    int n1 = num1.size(); 
    int n2 = num2.size(); 
    if (n1 == 0 || n2 == 0) 
    return "0"; 
    vector<int> result(n1 + n2, 0); 
    int i_n1 = 0;  
    int i_n2 = 0;  
    for (int i=n1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
        i_n2 = 0;              
        for (int j=n2-1; j>=0; j--) 
        { 
            int n2 = num2[j] - '0';  
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
            carry = sum/10; 
            result[i_n1 + i_n2] = sum % 10; 
   
            i_n2++; 
        } 
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
    
        i_n1++; 
    } 
 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 

    if (i == -1) 
    return "0"; 
    string s = ""; 
       
    while (i >= 0) 
        s += std::to_string(result[i--]); 
   
    return s; 
} 

std::vector<string> powvec(int val, int pow)
{
	string s = to_string(val);
	std::vector<string> v;
	for (int i = 1; i <= pow-1; ++i)
	{
		s = multiply(s, to_string(val));
		v.push_back(s);
	}
	return v;
}

int main()
{
	std::vector< std::vector<string> > v;
	std::vector<string> temp;

	for (int i = 2; i <= 100; ++i)
	{
		temp = powvec(i, 100);
		v.push_back(temp);
        temp.clear();
	}
	

	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			temp.push_back(v[i][j]);
		}
	}

    sort(temp.begin(), temp.end());
	temp.erase(unique(temp.begin(), temp.end()), temp.end());
    cout << temp.size() << endl;

}