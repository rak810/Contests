#include<stdio.h>

int main()

{
    long a, b, c, d, e, f, g, m = 99999999, i = 0;
    scanf("%ld%ld%ld", &a, &b, &c);

    d = a+b+c;
    e = 2*a+2*b;
    f = 2*c+2*a;
    g = 2*c+2*b;

    long ar[4] = {d, e, f, g};

    while(i<4)
    {
    	if(m>ar[i])
    	{
    		m = ar[i];
    	}
    	i++;
    }

    printf("%ld", m);


}
