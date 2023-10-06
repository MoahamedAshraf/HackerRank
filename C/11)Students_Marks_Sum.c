
//Complete the following function.
int sum_b(int* marks, int number_of_students)
{
    int sum = 0;
    for(int i=0;i<number_of_students;i+=2)
      {
          sum += marks[i];
      }
    return sum;
}
int sum_g(int* marks, int number_of_students)
{
    int sum = 0;
    for(int i=1;i<=number_of_students;i+=2)
      {
          sum += marks[i];
      }
    return sum;
}
int marks_summation(int* marks, int number_of_students, char gender) 
{
  //Write your code here.
  int sum = 0;
//   char i;
  
  switch(gender)
  {
      case 'b':
      
      sum = sum_b(marks,number_of_students);
    //   for(i=0;i<number_of_students;i=i+2)
    //   {
    //       sum = sum + marks[i];
    //   }
      
      break;
      
      case 'g':
      
      sum = sum_g(marks, number_of_students);
    //   for(i=1;i<=number_of_students;i=i+2)
    //   {
    //       sum = sum + marks[i];
    //   }
      break;
  }

  return sum;
}

