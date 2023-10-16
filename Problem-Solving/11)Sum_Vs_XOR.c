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

 /**
  * we know that (n+i)=(n^i)+2*(n&i)
  * So n + i = n ^ i implies n & i = 0
  * We can use the count of unset-bits in the binary representation of n. 
  * If the kth bit is set at a particular in n, kth bit in i must be 0 always, else kth bit of i can be 0 or 1
  * Hence, total such combinations are 2^(count of unset bits in n)
  * For example, consider n = 12 (Binary representation : 1 1 0 0). 
  * All possible values of i that can unset all bits of n are 0 0 0/1 0/1
  * (0/1) implies either 0 or 1. Number of such values of i are 2^2 = 4. 
  * 
  * https://www.geeksforgeeks.org/equal-sum-xor/
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
            // or count++; while count is initialized with zero
        }
        n = n>>1;
    }
    
    return count;
    //or return 1<<count; which implies 2^(count of zeros).
}

int main()
{
    long num,count;
    scanf("%d",&num);
    count = sumXor(num);
    printf("%ld",count);

}
    