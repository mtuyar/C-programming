#include <stdio.h>
#include <stdlib.h>
int number_input;
int i,result;
int main() {
	printf("Please enter a number to be calculated the Multiplication Table: ");
	scanf_s("%d",&number_input);
	for(i=0;i<=10;i++)
	{
		result = number_input * i;
		printf("%d x %d = %d\n",number_input,i,result);
	}
	return 0;
}