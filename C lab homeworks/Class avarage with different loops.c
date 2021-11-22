#include <stdio.h>
#include <stdlib.h>
int grade,i,selection,input; // variable for grades, count and selection
int sum = 0; // variable for sum of grades
int count = 1; // counter to break loop
char letter_grade; // letter grade
int main()
{
	printf("1- Pre-incremental\n2- Post-incremental\nChoose one of them: ");
	scanf("%d",&input);
	printf("\n1. while statement(s) with break\n2. while statement(s)\n3. do...while statements(s)\n4. for statement(s)\n5. for statement(s) with break\n\n"); // menu for options
	printf("Choose one of them to start: ");
	scanf("%d",&selection);
	if (input == 1) // to choose with method preincremental or postincremental
		{
		if (selection == 1)
		{
			printf("\n");
		    while (1) // while true loop
		    {
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					++count; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;
						case  0:
							letter_grade = 'F';
							break;												
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}
				if (count == 6)
				{
					break;
				}	
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);
		}	
		else if (selection == 2)
		{	
			printf("\n");
			while (count < 6)
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					++count; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;												
						case  0:
							letter_grade = 'F';
							break;						
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}							
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);		
		}
		else if (selection == 3)  // based on input value will enter 
		{
			printf("\n"); // empty line
			do 
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					++count; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;
						case  0:
							letter_grade = 'F';
							break;															
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}				
			}while(count <6);
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	
		}
		else if (selection == 4)
		{
			printf("\n");
			for (i = 1; i<6;)
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 )   // if not a correct format, will not enter
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers.
					++i; // counter to exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;	
						case  0:
							letter_grade = 'F';
							break;													
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade); // print the  of  letter grade
				   ++count; // increase the counter
				}
				else
				{
					printf("Wrong value, try again!\n"); // if wrong input
				}
			}		
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	// result of the avarage 
		}	
		else if (selection == 5)
		{		
			printf("\n");
			for (;;) // infinite  loop unless break
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					++count; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;												
						case  0:
							letter_grade = 'F';
							break;						
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}
				if (count == 6)
				{
					break;
				}
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	
		}
		else
		{
			printf("Error !\n");
		}
	}
	else if (input == 2) 
	{
		if (selection == 1)
		{
			printf("\n");
		    while (1) // while true loop
		    {
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					count++; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;
						case  0:
							letter_grade = 'F';
							break;												
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}
				if (count == 6)
				{
					break;
				}	
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);
		}	
		else if (selection == 2)
		{	
			printf("\n");
			while (count < 6)
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					count++; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;												
						case  0:
							letter_grade = 'F';
							break;						
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}							
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);		
		}
		else if (selection == 3)  // based on input value will enter 
		{
			printf("\n"); // empty line
			do 
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					count++; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;
						case  0:
							letter_grade = 'F';
							break;															
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}				
			}while(count <6);
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	
		}
		else if (selection == 4)
		{
			printf("\n");
			for (i = 1; i<6;)
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 )   // if not a correct format, will not enter
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers.
					i++; // counter to exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;	
						case  0:
							letter_grade = 'F';
							break;													
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade); // print the  of  letter grade
				   count++; // increase the counter
				}
				else
				{
					printf("Wrong value, try again!\n"); // if wrong input
				}
			}		
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	// result of the avarage 
		}	
		else if (selection == 5)
		{		
			printf("\n");
			for (;;) // infinite  loop unless break
			{
				printf("Please enter grade of student %d = ",count);		
		    	scanf("%d",&grade);
		    	if (0 <= grade && grade <= 100 && count < 6)   // if not a correct format, will not enter and after count reached to 5 will not evaluation other grades
		    	{
				    sum = grade + sum; // obtain sum
				    if(grade == 100) 
				    {					//  to enter case 9, letter grade must be A  
				    	grade = 90;
					}
					else if (grade <= 49 && grade > 0 ){  // all grades are F less than 50
						grade = 40; 		// to enter case 4, we did this
					}
					grade = grade / 10; // Dividing by 10, we get single digit numbers. For swich case.
					count++; // count exit after 5 grade
				    switch(grade)
				    {                                 // cases for letter grades
				    	case  9:
				    		letter_grade = 'A';
							break; 
				    	case  8:
							letter_grade = 'B';
							break;
				    	case  7:
							letter_grade = 'C';
							break;
				    	case  6:
							letter_grade = 'D';
							break;
				    	case  5:
							letter_grade = 'E';
							break;
				    	case  4:
							letter_grade = 'F';
							break;												
						case  0:
							letter_grade = 'F';
							break;						
				    	default:
				    		printf("Error! try again");
				    		break;
					}
				   printf("Your letter grade is %c \n\n",letter_grade);
				}
				else
				{
					printf("Wrong value, try again!\n\n");
				}
				if (count == 6)
				{
					break;
				}
			}
			printf("==> Class avarege (of 5 students) is %d\n",sum/5);	// printf result
		}
		else
		{
			printf("Error !\n");
		}
	}
	else
	{
		printf("Error!, please enter a valid input"); // error 
	}		
	system("pause");	
    return 0;
}
