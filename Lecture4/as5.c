#include <stdio.h>

int main()
{
	int days, start_day;

	do{	//Checker
		printf("Enter number of days in month: ");
		scanf("%d", &days);
		printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
		scanf("%d", &start_day);
		printf("\n");

		if (days >= 32 || days <= 0 || days <= 27){
			printf("The number of days you entered is invalid. \n");
		}else if(start_day <= 0 || start_day > 7){
			printf("You entered an invalid starting day. \n");
		}

	} while (days >= 32 || days <= 0 || days <= 27);

	for (int s = 1; s < start_day; ++s)//For adding the spaces
	{
		printf("   ", s);
	}

	for (int i = 1; i <= days; ++i) //For printing the days in the calendar
	{
		printf("%2d ", i);
		if (((i - 1) + start_day) % 7 == 0){
			printf("\n");
		}
	}

	return 0;
}