#include <stdio.h>

void main()
{
	int n = 6;
	int steps = 0;
    int i = 0;
    
    while(steps<n)
    {
        for(i=0;i< n-steps-1;i++)
        {
            printf(" ");
        }
        for(i=0;i<n-(n-steps-1);i++)
        {
            printf("#");
        }
		printf("\n");
        steps++;
    }
}
