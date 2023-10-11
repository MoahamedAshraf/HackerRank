#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'maximizingXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */

/*****************************************function solution***********************************/
int maximizingXor(int l, int r) 
{
    int i,j,max,xor;
    
    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            xor = i ^ j;
            if(xor>max)
            {
                max = xor;
            }
            else {
            {
                // do nothin
            }
            }
        }
    }
    
    return max;
}
/***********************************************************************************************/

void main()
{
   int result,num1,num2;
   scanf("%d\n",&num1);
   scanf("%d",&num2);

   result = maximizingXor(num1,num2);
   printf("%d",result);
}
