#include <stdio.h>
#include <stdlib.h>
int input;
int i,sum;
int main() {
	printf("Enter the number: ");
	scanf("%d",&input);
	printf("The positive divisor of the %d : ",input);
	for(i=1;i<input;i++)
	{
		if (input % i == 0 )
		{
			sum = sum + i;
			printf("%d ",i);
		}
	}
	printf("\nThe sum of the divisor is : %d\n",sum);
	if (sum == input)
	{
		printf("Well done ! %d is perfect number.\n",input);
	}
	else if (sum != input)
	{
		printf("%d is not a perfect number.\n",input);
	}
	else
	{
		printf("Error! try again.\n");
	}
	return 0;
}
