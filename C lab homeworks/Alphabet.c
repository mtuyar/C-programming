#include <stdio.h>
#include <stdlib.h>
int i,j;
i = 0;
int main() {
	char list[9] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
	do{		
		for (j=0;j<=i;j++)
		{
			printf("%c ",list[j]);
		}
		printf("\n");
		i++;
	}
	while(i != 9);
	return 0;
}
