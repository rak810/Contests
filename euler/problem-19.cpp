#include<iostream>
#include<ctime>
#define BASE 1900

using namespace std;

int main()
{
	int day = 1;
	int month = 0;
	int year = 1901;
	int i = 0;

	for (year = 1901; year < 2001; year++)
	{
		for (month = 0; month < 12; month++)
		{
			tm time_in = {0, 0, 0, day, month, year - BASE};
			time_t time_temp = mktime(&time_in);
			tm * time_out = localtime(&time_temp);
			if(time_out->tm_wday == 0)
			{
				i++;
			}
		}
	}

	cout << i << endl;
}