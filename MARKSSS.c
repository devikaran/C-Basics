//exam results
#include<stdio.h>
void main()
{
	int eng,math,soc,che,phy,totalmarks,percentage ;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&eng,&math,&soc,&che,&phy);
	totalmarks == eng+math+soc+che+phy;
	percentage == totalmarks*1.0/5;
	
	if(eng>=35 && math>=35 && soc>=35 && che>=35 && phy>=35)
	{
		printf("pass");
	
	if(percentage>=90)
	{
		printf("grade is O");
	}
	else if(percentage>=80)
	{
		printf("grade is A");
	}
	else if(percentage>=70)
	{
		printf("grade is B");
	}
	else if(percentage>=60)
	{
		printf("grade is C");
	}
	else if(percentage>=50)
	{
		printf("grade is D");
	}
	else
	{
		printf("grade is E");
	}
}
	else
	{
		printf("fail");
	}

	
}
