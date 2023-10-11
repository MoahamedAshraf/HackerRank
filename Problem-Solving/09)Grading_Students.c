#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* gradingStudents(int grades_count, int* grades) 
{
    int i,x;
    // *result_count =4;
    static int Ret_Arr[1000];
    for(i=0;i<grades_count;i++)
    {
        scanf("%d",&x);
        grades[i] = x;
    }
    
    for(i=0;i<grades_count;i++)
    {
         if(grades[i]<38)
         {
             Ret_Arr[i] = grades[i];
         }
         else if(grades[i]>=38)
         {
             if(((grades[i]+1)%5) == 0)
         {
             Ret_Arr[i] = grades[i]+1;
         }
         else if(((grades[i]+2)%5) == 0)
         {
             Ret_Arr[i] = grades[i]+2;
         }
         else
         {
             Ret_Arr[i] = grades[i];
         }
         }

    }
    return Ret_Arr;
}

void main()
{
    int*arr;
    int grades_count;
    int *grades = (int*)malloc(20*sizeof(int));
    scanf("%d",&grades_count);
    arr = gradingStudents(grades_count,grades);
    for (int i = 0;i<grades_count;i++)
    {
        printf("%d \n",*(arr + i));
    }
}