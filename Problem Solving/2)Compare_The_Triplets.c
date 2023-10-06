int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) 
{
    int i;
    *result_count = 2;
    static int res[2] = {0,0};
    for(i=0; i<a_count; i++)
    {
        if(a[i] > b[i])
        {
            res[0]++;
        }
        else if(a[i] < b[i])
        {
            res[1]++;
        }
        else if(a[i] == b[i])
        {
            //do nothing
        }
    }
    return res;
    
    
}