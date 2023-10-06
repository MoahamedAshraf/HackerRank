int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int i;
    int LtoR;
    int RtoL;
    for(i=0 ; i<arr_rows ; i++)
    {
        LtoR = LtoR + arr[i][i];
        RtoL = RtoL + arr[i][arr_rows-(i+1)];
    }
    
    return abs(LtoR - RtoL);
}