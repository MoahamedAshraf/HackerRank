#include<stdio.h>
#include<stdlib.h>



int simpleArraySum(int ar_count, int* ar) 
{
    int i=0,j=0;
    scanf("%d",&ar_count);
    for(i=0;i<ar_count;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<ar_count;i++)
    {
        j = j + ar[i];
    }
    return j; 

}