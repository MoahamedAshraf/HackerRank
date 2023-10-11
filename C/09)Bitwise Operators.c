#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void main()
// {
	// int i=0;
	// int j=0;
	
	// int x=0;
	// int y=0;
	// int z=0;
	
	// int n=7;
	// int k=4;
	
	// int r=0;
	
	// int maxand;
	// int maxor1;
	// int maxor2;
	
	// int and[1000];
	// int or[1000];
	// int xor[1000];
	
	// for (i=1;i<n;i++)
	// {
		// for(j=i+1;j<n+1;j++)
		// {
			// x = i&j;
			// y = i|j;
			// z = i^j;
			// and[r] = x;
			// or[r] = y;
			// xor[r] = z;
			//printf("%d\n",and[r]);
			// r++;
			
		// }
	// }
	
	// maxand = 0;
	// for(i=0;i<r;i++)
	// {
		// if((and[i] > maxand) && (and[i] < 4))
		// {
			// maxand = and[i];
		// }
		// printf("%d\n",and[i]);
	// }
	// printf("\n");
	// printf("%d",maxand);
	
	// maxand = and[0];
	// maxor1 = or[0];
	// maxor2 = xor[0];
	
	// for(i=0;i<r;i++)
	// {
		// if(and[i] > maxand && and[i] < k)
		// {
			// maxand = and[i];
			
		// }
		// printf("%d\n",maxand);
	// }
	// printf("%d\n",maxand);
	
	// for(i=0;i<2*n;i++)
	// {
		// if(or[i] > maxor1 && or[i] < k)
		// {
			// maxor1 = or[i];
		// }
	// }
	// printf("%d\n",maxor1);
	
	// for(i=0;i<2*n;i++)
	// {
		// if(xor[i] > maxor2 && xor[i] < k)
		// {
			// maxor2 = xor[i];
		// }
	// }
	// printf("%d\n",maxor2);
	
//}

void calculate_the_maximum(int n, int k) 
{
	
	
	// int *and;
	// int *or;
	// int *xor;
	
	// and=(int*)malloc(r * sizeof(int));
	// or=(int*)malloc(r * sizeof(int));
	// xor=(int*)malloc(r * sizeof(int));
	
	int i=0;
    int j=0;
    
    int x=0;
    int y=0;
    int z=0;
    
    
    int r=0;
    
    int maxand;
    int maxor1;
    int maxor2;
    
    int and[1000000];
    int or[1000000];
    int xor[1000000];
    
    for (i=1;i<n;i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            x = i&j;
            y = i|j;
            z = i^j;
            and[r] = x;
            or[r] = y;
            xor[r] = z;
            r++;
            
        }
    }
    maxand = 0;
    maxor1 = 0;
    maxor2 = 0;
    
    for(i=0;i<r;i++)
    {
        if(and[i] > maxand && and[i] < k)
        {
            maxand = and[i];
        }
    }
    printf("%d\n",maxand);
    
    for(i=0;i<r;i++)
    {
        if(or[i] > maxor1 && or[i] < k)
        {
            maxor1 = or[i];
        }
    }
    printf("%d\n",maxor1);
    
    for(i=0;i<r;i++)
    {
        if(xor[i] > maxor2 && xor[i] < k)
        {
            maxor2 = xor[i];
        }
    }
    printf("%d\n",maxor2);
  //Write your code here.
}

void main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
}