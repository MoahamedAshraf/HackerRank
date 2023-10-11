#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main ()
{
	int x,y;
	float z,c;
	
	int sum1;
	int sub1;
	float sum2;
	float sub2;
	
	printf("enter 1st int : ");
	scanf("%d",&x);
	printf("enter 2nd int : ");
	scanf("%d",&y);
	printf("enter 1st float : ");
	scanf("%f",&z);
	printf("enter 2nd float : ");
	scanf("%f",&c);
	
	sum1 = x+y;
	sub1 = x-y;
	sum2 = z+c;
	sub2 = z-c;
	
	printf("the sum of integers = %d\n",sum1);
	printf("the sub of integers = %d\n",sub1);
	printf("the sum of floats = %.2f\n",sum2);
	printf("the sub of floats = %.2f\n",sub2);
	
	return 0;
}