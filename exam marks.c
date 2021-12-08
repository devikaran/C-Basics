//exam results
#include<stdio.h>
void main()
{
	int eng,math,soc,che,phy;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&eng,&math,&soc,&che,&phy);
	if(eng>=35 && math>=35 && soc>=35 && che>=35 && phy>=35)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
