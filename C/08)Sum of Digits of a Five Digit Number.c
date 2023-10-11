#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() 
{
	
    int n,x,y,z,j,k,t;
    scanf("%d", &n);
    x = n % 10;
	printf("%d",x);
    y = ((n - x)/10)%10;
	printf("%d",y);
    z = ((n - (n % 100))/100) % 10;
	printf("%d",z);
    j = ((n - (n % 1000))/1000) % 10;
	printf("%d",j);
    k = ((n - (n % 10000))/10000) % 10;
	printf("%d",k);
    t = x + y + z + j + k;
    printf("%d",t);
    
}