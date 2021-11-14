#include <stdio.h>
#include <stdlib.h>
int day_number;

int main()
{
	printf("Enter weekday number (1-7): ");
	scanf_s("%d",&day_number);
	switch (day_number)
	{
	case 1:
		printf("%d. Day of Week is Monday", day_number);
		break;
	case 2:
		printf("%d. Day of Week is Tuesday", day_number);
		break;
	case 3:
		printf("%d. Day of Week is Wednesday", day_number);
		break;
	case 4:
		printf("%d. Da of Week is Thursday", day_number);
		break;
	case 5:
		printf("%d. Day of Week is Friday", day_number);
		break;
	case 6:
		printf("%d. Day of Week is Saturday", day_number);
		break;
	case 7:
		printf("%d. Day of Week is Sunday", day_number);
		break;
	default:
			printf("Error please enter a correct number");
			break;
	}
	return 0;
}
