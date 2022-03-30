/*
Name - Tamim Chowdhury
Lab Section - 3
Student# - 501033638

LAB #7
Purpose:
This lab helps you to learn how to manipulate one dimensional numeric 
arrays in C programs.
 */

#include <stdio.h>

int main(void) {
  FILE *p;
  p=fopen("data.txt","r");
  double x_arr[25], x_second_arr[25], normax[25];
  double x, xhigh, xlow, min=0, max = 100;
  int i, n;
  i = 0;
  n = 0;
  
  while (fscanf(p,"%lf",&x) != EOF){
    x_arr[i] = x;
    i++;
    n++; 
  }
  
  printf("Number of elements: %d\n",n);
  printf("Numbers are: \n");
  
  for (i=0; i<n; i++){
    printf("%0.02f\t",x_arr[i]);
  }

  xhigh = x_arr[0];
  xlow = x_arr[0];

  for (i=0; i<n; i++){
    if (x_arr[i] > xhigh)
      xhigh = x_arr[i];
  }

  for (i=0; i<n; i++){
    if (x_arr[i] < xlow)
      xlow = x_arr[i];
  }

  printf("\n\nLargest value in array: %0.02f\n",xhigh);
  printf("Smallest value in array: %0.02f\n\n", xlow);

  printf("First Array\t\tSecond Array\n");
  for (i=0; i<n; i++){
    x_second_arr[i] = 3*x_arr[i];
    printf("%0.02f\t\t\t%0.02f\n",x_arr[i], x_second_arr[i]);
  }

  printf("\n\nOriginal Array\t\tNormalied Array\n");
  for (i=0; i<n; i++){
    normax[i] = min + ((x_arr[i] - xlow) * (max - min))/ (xhigh - xlow);
    printf("%0.02f\t\t\t%0.02f\n",x_arr[i], normax[i]);
  }

/**
i) Arrays start at element [0] before going up. [0] refers to the first 
   element of the array. If you were to use [1], you would get the 
   second element of the array. Arrays and loops work well together as
   it shortens that amount of declarations and variables that one would
   need to declare. For example, a for/while loop requires a list of 
   numbers. Instead of declaring each number and data type individually,
   you can put each element in a list and then code the loop to go through
   each element.

ii)

**/
}
