#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[1001];
  	int i, j, k;
  	gets(str);
  	 	
  	for(i = 1; i < (strlen(str)-1); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}

  for(i = 0; i < strlen(str); i++)
  {
    if((str[i] = '{') && (str[i] = '}') && (str[i] = ' ') && (str[i] = ','))
    {
      str[i] = str[i+1];
    }
  }
	int x = strlen(str);
	printf("%d\n", x);
  printf("%s\n", str);
  	return 0;
}