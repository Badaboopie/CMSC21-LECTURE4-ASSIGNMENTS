#include <stdio.h>

int main()
{
	int j = 1;

	for (int i = 1; i < 10; ++i)
	{
		printf("%d \n", j);
		j *= 2;
	}
	return 0;
}