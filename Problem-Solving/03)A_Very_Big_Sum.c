long aVeryBigSum(int ar_count, long* ar) 
{
    int i;
    long int sum=0;
    for(i=0; i<ar_count; i++)
    {
        sum = sum + ar[i];
    }
    return sum;
    
}