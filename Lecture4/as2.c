#include <stdio.h>

int main()
{
	//while loop
	int i;

	i = 10;

	while (i < 10){
		printf("%d", i);
		i += 1;
	}

	printf("\n");

	//for loop
	for (int i = 10; i < 10; ++i)
	{
		printf("%d", i);
	}

	printf("\n");

	//do-while executes atleast once without checking the condition
	i = 10;

	do
	{
		printf("%d", i);
		i += 1;
	} while (i < 10);

	return 0;
}