#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int population, percentage, thereshold,increase_n;
int new_population = 0;
float increase;
int year = 1;
int main() {
	printf("Enter the population: ");
	scanf("%d",&population);
	printf("Enter the percentage: ");
	scanf("%d", &percentage);
	printf("Enter the threshold: ");
	scanf("%d", &thereshold);
	while(1)
	{
		increase = (float)(percentage * population) / 100;
		increase_n = round(increase);
		population = (population + increase_n); 
		printf("Amount of increase: %.2f , Population after %d.year: %d\n",increase,year,population);
		//increase = 0;
		if (population >= thereshold)
		{
			printf("Total years to surpass the threshold value : %d",year);
			break;
		}
		year++;
	}
	return 0;
}
