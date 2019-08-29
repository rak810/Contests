#include<stdio.h>

int chess(char p[])
{
	int board[8][8];
	int hor = (p[1] - '0');
	int ver;
	char c[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

	for (int i = 0; i < 8; ++i)
	{
		if(p[0] == c[i])
		{
			ver = i+1;
			break;
		}
	}

    int j = 0;
    if (ver - 1 > 0 && hor - 2 > 0)
    {
        j++;
    }

    if (ver + 1 < 9 && hor - 2 > 0)
    {
        j++;
    }

    if (ver + 2 < 9 && hor - 1 > 0)
    {
        j++;
    }

    if (ver + 2 < 9 && hor + 1 < 9)
    {
        j++;
    }

    if (ver + 1 < 9 && hor + 2 < 9)
    {
        j++;
    }

    if (ver - 1 > 0 && hor + 2 < 9)
    {
        j++;
    }

    if (ver - 2 > 0 && hor + 1 < 9)
    {
        j++;
    }

    if (ver - 2 > 0 && hor - 1 > 0)
    {
        j++;
    }
    return(j);
	
}

int main()
{
	int n;
	scanf("%d", &n);
	int result[n];
	char pos[2];

	for (int i = 0; i < n; ++i)
	{
		scanf("%s", pos);
		int temp = chess(pos);
		result[i] = temp;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d\n", result[i]);
	}


}