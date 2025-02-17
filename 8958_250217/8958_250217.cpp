#include <stdio.h>
#pragma warning (disable: 4996)
#include <string.h>

int main(void)
{
	char str[80];

	scanf("%s", str);
	int k = strlen(str);

	int result = 0;
	int count = 0;

	for (int i = 0; i < k; i++)
	{
		if (str[i] == 'o')
		{
			count = count + 1;
			result = result + count;
		}
		else
		{
			count = 0;
		}
	}

	printf("%d", result);

	return 0;
}