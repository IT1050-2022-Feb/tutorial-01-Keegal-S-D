/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int=mark1,mark2,sum;
   float=avg;
   printf("Enter Mark1");
   scanf("%d",&mark1);
   printf("Enter Mark2");
   scanf("%d",&mark2);
  
   sum=mark1+mark2;
   avg=sum/2;
   printf("Total of marks is %d/n",sum);
   printf("Average of the marks is %f",avg);
  return 0;
}

