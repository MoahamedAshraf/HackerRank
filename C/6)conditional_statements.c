#include<stdio.h>
#include<string.h>
void main(void)
{
	char *arr[9] = {"one" , "two" , "three", "four", "five", "six" , "seven" , "eight", "nine"};
    
    int x;
    char i =0;
	while(1)
	{
			scanf("%d",&x);
		
		for(i=1;i<10;i++)
		{
			if(x == i)
			{
				printf("%s\n",arr[i-1]);
			}
		}
	}
    
	int x = 0; 
    
    scanf("%d",&x);
    if(x == 1)
    {
        printf("one\n");
    }
    else if(x==2)
    {
        printf("two\n");
    }
    else if(x==3)
    {
        printf("three\n");
    }
    else if(x==4)
    {
        printf("four\n");
    }
    else if(x==5)
    {
        printf("five\n");
    }
    else if(x==6)
    {
        printf("six\n");
    }
    else if(x==7)
    {
        printf("seven\n");
    }
    else if (x==8)
    {
        printf("eight\n");
    }
    else if(x==9)
    {
        printf("nine\n");
    }
    else if(x>9)
    {
        printf("Greater than 9\n");
    }

}