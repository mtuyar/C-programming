#include <stdio.h>
#include <stdlib.h>

int number;
int count = 0;
int main() {
	printf("Enter a number: ");
	scanf("%d",&number);
	while (number > 0){
		number = number / 10;
		count++;
	} 
	printf("Digit number is %d",count);
	
	return 0;
}
