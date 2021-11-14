/*
Class avarage program with sentinel and without sentinel and if else statement*/

#include <stdio.h>   //library
#include <stdlib.h>  //library

// here we are defining our variables
int selection;
int counter = 1; // loop counter
int counter2 = 1; int counter3 = 0; // loop counter
float avarage, avarage2, avarage3; // avarage of the grades
int list[3], list2[3]; // we created a list in order to keep our different grades
int total,total2,total3 = 0; // the sum of grades
int grade1,grade2,grade3,grade22,grade33; // grades

// Function main begins program execution
int main() {
	printf("1. if or if else statement(s) only \n2. Use while statement(s) without sentinel \n3. Use while statement(s) with sentinel\n\n");
	printf("Please select one of them = ");
	scanf("%d",&selection);   
	
	// Above we are asked three questions and we will start our program according to the answer of this question
	
	if (selection == 1)   // 
	{
		printf("\nPleaser enter 1. grade = ");
		scanf("%d",&grade1); // read grade from user
		counter ++;
		
		/* wait until 3 grade entered */
		if (counter < 4)   
		{
			if (grade1>=0 && grade1<=100)  // restricted  between 100 and 0
			{
				printf("Pleaser enter 2. grade = ");
				scanf("%d",&grade2); // read grade from user
				counter ++;	  // increase counter	
			}
			else // if a different value is entered
			{
				printf("Failed, please enter between 100 and 0");
				return 0; // to end program 
			}
		}
	    if (counter < 4)
		{
			if (grade2>=0 && grade2<=100) // restricted  between 100 and 0
			{
				printf("Pleaser enter 3. grade = ");
				scanf("%d",&grade3); // read grade from user
			}
			else
			{
				printf("Failed, please enter between 100 and 0\n");	
				return 0;
			}
		}
		if (grade3>=0 && grade3<=100) // restricted  between 100 and 0
		{
			if (counter == 3)  // if three grade are entered 
			{
				avarage = (float)(grade1 + grade2 + grade3) / counter; // sum of grade which entered
				printf("\nGrade1: %d Grade2: %d Grade3: %d\n",grade1,grade2,grade3); // print all grades
				printf("The avarage of the grades are %.2f\n",(float)avarage);
			}
			else  // any error situation
			{
				printf("Failed, please retry again");
			}	
		}
		else
		{
			printf("Failed, please enter between 100 and 0");
		}
		return 0;
    }
	/////////////////////////////////////////
	// Without While Sentinel
	else if (selection == 2) // according to result of selection
	{
		
		printf("\nPlease enter a grade = ");
		scanf("%d",&grade22); // read grade from user
		list[counter2] = grade22; // indicate first value of list according to first input grade
		while(counter2 < 3)   // continue until three grade entered
		{ 
			if (grade22>=0 && grade22<=100) //restricted  between 100 and 0
			{
			total2 = total2 + grade22; // obtain sum of grades
			counter2 ++;   // increase counter
			printf("Please enter a grade = ");
			scanf("%d",&grade22); // read grade from user
			list[counter2] = grade22; // indicate other values of list
			}
			else
			{
				printf("Failed, please enter a number between 100 and 0\n");
				return 0;
				
			}
		}
		// if user entred a least one grade
		if (counter2 != 0)
		{
			printf("\nGrades are %d %d %d\n",list[1],list[2],list[3]); // we printed grades
			avarage2 =(float)( list[1] + list[2] + list[3] ) / counter2; // we calculated average of grades with data of list
			printf("Class avarage is %.2f\n",avarage2);	 //display avarage with two digits of precision
		}
		else
		{
			printf("No grades were entered\n");	
		}		
		return 0;
	}
	//////////////////////////////////////////
	// With Sentinel
	else if (selection == 3)
	{
		
		printf("\nPlease enter a grade | To exit enter \"-1\" = ");
		scanf("%d",&grade33); // read grade from user
		if (grade33<-1 || grade33>100) // restricted  between 100 and 0
		{
			printf("Failed, please enter a value between 100 and 0\n");
			return 0;
		}
		while(grade33 != -1) // continue until '-1' were entered
		{ 
			list2[counter3] = grade33; // assign list value 
			total3 = total3 + grade33; // sum of grades
			counter3 ++; // increase counter
			printf("Please enter a grade | To exit enter \"-1\" = ");
			scanf("%d",&grade33); // read grade from user
			if (grade33<-1 || grade33>100) // restricted  between 100 and 0
			{
				printf("Failed, please enter a value between 100 and 0\n");
				return 0; // end program 
			}
		}
		if (counter3 != 0)
		{
			printf("\nGrades are %d %d %d\n",list2[0],list2[1],list2[2]); // printed grades
			avarage3 = (float)total3 / counter3; // calculated avarage of grades
			printf("Class avarage is %.2f\n",avarage3);	
		}
		else //  in case of no grades  entered
		{
			printf("No grades were entered\n");	
		}
		return 0;		
	}
	else // // in case of error
	{
		printf("Please enter a correct number");
	}
}
