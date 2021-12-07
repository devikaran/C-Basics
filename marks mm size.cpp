#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	if(marks==80)
	{
		printf("%d is A",marks);
	}

	else if(marks>=70 )
	{
		printf("%d is B",marks);
	}
		else if(marks>=60 )
	{
		printf("%d is C",marks);
	}
		else if(marks>=50 )
	{
		printf("%d is D",marks);
	}
		else
	{
		printf("%d is Fail",marks);
	}
}
