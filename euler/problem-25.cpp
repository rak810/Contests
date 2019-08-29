#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>

using namespace std;

/*double fib(int n) {
    double phi = (1 + sqrt(5))/2.0; // golden ratio
    double phi_hat = (1 - sqrt(5))/2.0; // fraction part of golden ratio

    return (pow(phi, n) - pow(phi_hat, n))/sqrt(5);
}
int main()
{
	long long n = 1;
	string s;
	while(n)
	{
		double x = fib(n);
		s = to_string(x);
		if(s.length() - 7 == 350)
			break;
		n++;
	}

	cout << n << endl;
	cout << s << endl;
}*/

#include <stdio.h>

int Calc_Fib (int numA[], int numB[], int temp[], int index) {
    int i = 0;

    //Check 1000th digit for non-zero value.
    if (numB[999] != 0) return index;

    //Add arrays A and B vertically.
    for (i = 0; i < 1000; ++i)   {
        temp[i] += (numA[i] + numB[i]);

        if (temp[i] > 9)   {
            temp[i + 1] = temp[i] / 10;
            temp[i] %= 10;
        }

        numA[i] = numB[i];
        numB[i] = temp[i];
        temp[i] = 0;
    }
    Calc_Fib(numA, numB, temp, ++index);
}

int main()  {
    int numA[1000];   //Holds previous term.
    int numB[1000];   //Holds current term.
    int temp[1000];   //Holds temporary number for vertical addition.
    int i        = 0;
    int indexVal = 2;

    for (i = 0; i < 1000; ++i)  {
        numA[i] = 0;
        numB[i] = 0;
        temp[i] = 0;
    }

    //Initialize first two terms.
    numA[0] = (numB[0] = 1);

    indexVal = Calc_Fib(numA, numB, temp, indexVal);

    printf("Tada: %d\n", indexVal);

    return 0;
}