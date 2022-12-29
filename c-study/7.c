#include<stdio.h>
int main(void)
{
	char str[101] = { 0 };
	int i;

	
	gets_s(str);

	for (i = 0; str[i] != NULL; i++) 
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; 
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') 
		{
			str[i] = str[i] + 32;
		}
		
	}
	printf("%s", str);
	return 0;
	
}

