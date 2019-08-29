#include<iostream>

using namespace std;


int main()
{
	int c = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum = 0;

	for (int a = 1, b = 2; ; a+=2, b+=2)
	{
		int x = a*b+1;
		sum1+=x;
		c++;
		if(c == 500)
		{
			break;
		}
	}
	cout << "sum1 : " << sum1 << endl;
	c = 0; 
	for(int a = 3, b = 2; ;a+=2, b+=2)
	{
		int x = a*b+1;
		sum2+=x;
		c++;
		if(c == 500)
		{
			break;
		}

	}
	cout << "sum2 : " << sum2 << endl;
	c = 0; 
	for (int i = 1; ; i+=2)
	{
		sum3+=i*i;
		c++;
		if(c == 501)
		{
			break;
		}
	}
	cout << "sum3 : " << sum3 << endl;
	c = 0; 
	int a = 1;

	for (int i = 1; ; i+=2)
	{
		a = a+4*i;
		sum4+=a;
		c++;
		if(c == 500)
		{
			break;
		}
	}
	cout << "sum4 : " << sum4 << endl;
	sum = sum1 + sum2 + sum3 + sum4;
	cout << "-----------------" << endl;
	cout << "Sum  : " << sum  << endl;
}