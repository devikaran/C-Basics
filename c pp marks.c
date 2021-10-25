#include<stdio.h>
void main()
{
	//Variable declaration
	int phy;
	int che;
	int math;
	int eng;
	int total;
	
	
	//Initialization
	phy = 60;
	che = 70;
	math = 80;
	eng = 90;
	
	total=phy+che+math+eng;
	
	//output
	printf("marks in physics %d\n", phy);

	printf("marks in chemistry %d\n", che);
	
	printf("marks in mathhematics %d\n", math);
	
	printf("marks in english %d\n", eng);
	
	printf("marks in total %d", phy+che+math+eng);

}
