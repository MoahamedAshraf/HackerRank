void plusMinus(int arr_count, int* arr) 
{
    int   positive_count = 0;
    int   negative_count = 0;
    int   zeros_count = 0;
    float positive_fraction = 0.0;
    float negative_fraction  = 0.0;
    float zeros_fraction = 0.0;
    int i ;
    
        for(i=0;i<arr_count;i++)
        {
            if(arr[i] == 0)
            {
                zeros_count++;
            }
            else if(arr[i]>0)
            {
                positive_count++;
            }
            else if(arr[i]<0)
            {
                negative_count++;
            }
        }
        
        positive_fraction = (float)(positive_count)/(arr_count);
        negative_fraction = (float)(negative_count)/(arr_count);
        zeros_fraction = (float)(zeros_count)/(arr_count);
        
printf("%.6f \n %.6f \n %.6f",positive_fraction,negative_fraction,zeros_fraction);

}
