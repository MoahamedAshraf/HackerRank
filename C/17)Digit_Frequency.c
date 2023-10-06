#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main() 
{
    int i;
    char num_count[10]={0};
    char string[1000];
    char* ptr = string;

    scanf("%s",string);
    
    while(*ptr!='\0')
    {
        switch(*ptr)
        {
            case '0' : ++num_count[0]; break;
            
            case '1' : ++num_count[1]; break;
            
            case '2' : ++num_count[2]; break;
            
            case '3' : ++num_count[3]; break;
            
            case '4' : ++num_count[4]; break;
            
            case '5' : ++num_count[5]; break;
            
            case '6' : ++num_count[6]; break;
            
            case '7' : ++num_count[7];  break;
            
            case '8' : ++num_count[8]; break;
            
            case '9' : ++num_count[9]; break;
        }
		++ptr;
    }
	
	for(i=0;i<10;i++)
	{
		printf("%d ",num_count[i]);
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
}