#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[2000];
    int n;
    int x = 0;
    int y = 0; //(n*2)-1;
    int i,j;
    
    scanf("%d",&n);
    
    for(i=0 ; i<(n*2)-1 ; i++)
    {
        arr[i] = n;
    }
    
    for(i=0 ; i<(n*2)-1 ; i++)
    {
        if(i==0)
        {
            for(j=x ; j<((n*2)-1)-y ; j++)
            {
                arr[j] = arr[j]-i;
            }
            x++;
            y++;
        }
        if(i>0 && i<n)
        {
            for(j=x ; j<((n*2)-1)-y ; j++)
            {
                arr[j] = arr[j]-1;
            }
            x++;
            y++;
        }
        else if(i>=n && i<(n*2)-1)
        {
            --x;
            --y;
            for(j=x ; j<((n*2)-1)-y ; j++)
            {
                arr[j] = arr[j]+1;
            }
            
        }
        
        for(j=0 ; j<(n*2)-1 ; j++)
        {
            printf("%d ",arr[j]);
        }
        
        printf("\n");
    }
    return 0;
}