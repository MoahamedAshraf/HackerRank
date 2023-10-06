#include<stdio.h>

void main()
{
	int arr[5] = {1,2,3,4,5};
	int i,j;
    long int min=0,max=0;
    long int sum=0;
    for(i=0;i<5;i++)
    {
		sum = 0;
		
        for(j=0;j<5;j++)
        {
            sum = sum+arr[j];
        }
        sum = sum-arr[i];
        if(i==0)
        {
            min=sum;
            max=sum;
        }
        else if(i>0)
        {
            if(sum>max)
            {
                max=sum;
            }
            else if(sum<min)
            {
                min=sum;
            }
        }
    }
    
    printf("%ld %ld",min,max);
}