/*

Name - Tamim Chowdhury
Lab Section - 3
Student# - 501033638

LAB #6
Purpose:
This lab helps you to review programming in C with user-defined 
functions that have multiple arguments and one result (call by value) 
and user-defined functions that have multiple "results" 
(call by reference). Note: This is a long lab. You might have to 
continue it at home. Don't skip! It's important!

*/


#include <stdio.h>


int f1 (int y);
int f2 (int y);
int f3 (int *x_address);

int main(void) {
  int input, result1, result2, x_value; 
  do 
  {
  printf("Give a number between 10 and 99: ");
  scanf("%d", &input);
  }

/**
  while (input < 10||input > 99);
    result1 = input/10;
    result2 = input%10;
    printf("Number of 10's - %d\n", result1); 
    printf("Remainder - %d\n", result2);
    return 0;
}
**/

  while (input < 10||input > 99);
  result1 = f1(input);
  printf("Number of 10's in input: %d\n", result1);

  result2 = f2(input);
  printf("Remainder: %d\n", result2);

  x_value = f3(&input);
  printf("x_value: %d\n", x_value);

  return 0;
}

int f1 (int y){
  int result1;
  result1 = y/10;
  return (result1);
}
int f2 (int y){
  int result2;
  result2 = y%10;
  return (result2);
}
int f3 (int *x_address){
  return (*x_address);
}

/**
i) The difference between an argument and a parameter is that an 
   argument is the data passed at the time of calling a function while a 
   parameter is a variable defined by a function that receives a value 
   when the function is called. An argument is an actual value while a 
   parameter is a placeholder.

ii)
**/
