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
 * Complete the 'sumXor' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long sumXor(long n) 
{
    long i;
    long count = 1;
    while(n)
    {
        if((n&1) == 0)
        {
            count<<=1;
        }
        n = n>>1;
    }
    
    return count;
}

int main()
{
    long num,count;
    scanf("%d",&num);
    count = sumXor(num);
    printf("%ld",count);

}
    