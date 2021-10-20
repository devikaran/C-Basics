/* C program to print age,cgpa,initial */
#include<stdio.h>
void main()
{
	//variable declaration
	int age;
	float cgpa;
	char initial;
	
	//initialization
	age = 21;
	cgpa = 8.5;
	initial = 'R'; // You have enclose a character using single quotes
	
	// Output
	printf("Age of the student is %d\n", age);
	printf("CGPA of the student is %f\n", cgpa);
	printf("Student surname starts with %c", initial);
}
