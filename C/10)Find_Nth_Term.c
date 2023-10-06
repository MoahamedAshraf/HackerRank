#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int func(int n, int a, int b, int c) 
{
  //Write your code here.
  
  int x;
  if	  (n==1) {x=a;}
  else if (n==2) {x=b;}
  else if (n==3) {x=c;}
  else if (n>3)
  {
	  x = func(n-1, a, b, c); //+ func(n-2, a, b, c); + func(n-3, a, b, c);
  }
  
  return x;
  
}

void main(void) 
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = func(n, a, b, c);

    printf("%d", ans);
}
