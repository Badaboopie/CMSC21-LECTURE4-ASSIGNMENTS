#include <stdio.h>

int main()
{
	int j;

	j = 1;

	for (int i = 0; i <= 10; ++i)
	{
		printf("%d  %d\n", i, j);
		j *= 2;
	}

	return 0;
}