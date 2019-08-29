#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
	long i = 144, tri, pent, hex;
	std::vector<long> triv, pentv, hexv;

	while(true)
	{

		pent = i*(3*i - 1)/2;
		hex = i*(2*i - 1);
		pentv.push_back(pent);
		hexv.push_back(hex);
		tri = i*(i+1)/2;
		if(binary_search(pentv.begin(), pentv.end(), tri) == 1 && binary_search(hexv.begin(), hexv.end(), tri) == 1)
		{
			break;
		}
		i++;

	}

	cout << tri << endl;
}