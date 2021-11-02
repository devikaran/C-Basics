/* All arithmetic operations */
#include<stdio.h>
void main()
{
	int a,b,s;
	
	a=52;
	b=36;
	s=a+b;
	
	printf("sum of %d and %d is %d:",a,b,s);


	int c,d,t;
	
	c=36;
	d=20;
	t=c-d;
	
	printf("difference between %d and %d is %d:",c,d,t);

    int e,f,u;
    e=12;
    f=12;
    u=e*f;
    
    printf("product of %d and %d is %d:",e,f,u);


    int g,h,v;
    
    g=2667;
    h=65;
    v=g/h;
    
    printf("quotient of %d and %d is %d:",g,h,v);


    int i,j,w;
    
    i=2667;
    j=65;
    w=i%j;
    
    printf("remainder of %d and %d is %d:",i,j,w);
}
