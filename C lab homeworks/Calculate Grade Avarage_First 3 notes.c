#include <stdio.h>
#include <stdlib.h>

int grade,total,counter;
float avarage;
total,counter = 0;
int list[3];
int main() {
	printf("Please enter a grade | To exit enter \"-1\" = ");
	scanf("%d",&grade);
	while(grade != -1)
	{ 
		list[counter] = grade;
		total = total + grade;
		counter ++;
		printf("Please enter a grade | To exit enter \"-1\" = ");
		scanf("%d",&grade);
	}
	if (counter != 0)
	{
		printf("\nGrades are %d %d %d\n",list[0],list[1],list[2]);
		avarage = (float)total / counter;
		printf("Class avarage is %.2f\n",avarage);	
	}
	else
	{
		printf("No grades were entered\n");	
	}
		
			
	
	return 0;
}
