#include <stdio.h>
#include <math.h>
int number, digit, sum = 0;
int main()
{
	printf("Enter a number: ");
	scanf("%d",&digit);
	while (digit > 0)
	{
		number = digit % 10;
		sum = sum + number;
		digit = digit / 10; 
	}
	printf("The sum is %d\n",sum);
		if (sum % 9 == 0)
	{
		printf("Divisible by 9 : Yes\n");
	}
	else
	{
		printf("Divisible by 9 : No\n");
	}	
	return 0;
}


