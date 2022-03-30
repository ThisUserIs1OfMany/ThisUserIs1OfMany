/*
 * Lab #4
 * Lab purpose: 
 * The purpose of this lab is to learn to apply the selection control 
 * structures in writing a C program to solve a given problem.
 */

#include <stdio.h>
#include <math.h>

int main()
{
  /* Excercise 3 */
  printf("\nExcercise #3: \n");
	char classS;
	printf("Input one letter to determine it's warship class: ");
	scanf("%c", &classS);
  switch(classS){
    case 'a':
      printf("Class - Aircraft Carrier");
      break;
    case 'A':
      printf("Class - Aircraft Carrier");
      break;
    case 'c':
      printf("Class - Cruiser");
      break;
    case 'C':
      printf("Class - Cruiser");
      break;
    case 'd':
      printf("Class - Destroyer");
      break;
    case 'D':
      printf("Class - Destroyer");
      break;
    case 'f':
      printf("Class - Frigate");
      break;
    case 'F':
      printf("Class - Frigate");
      break;
    case 's':
      printf("Class - Submarine");
      break;
    case 'S':
      printf("Class - Submarine");
      break;
  }

	/* Excercise 1 and 2 */
	printf("\n\nExcercise #1/#2: \n");
	/*1a*/
	float a1;
	float a2;
	float t1;
	float t2;
	printf("Enter Assignments Grades: ");
	scanf("%f %f", &a1, &a2);
	printf("Enter Test Grades: ");
	scanf("%f %f", &t1, &t2);
	/*1b*/
	float average = ((a1+a2+t1+t2)/4);
	printf("The average is: %.2f.\n", average);
	/*1c*/
	if (average >= 80){
		if (t1&&t2 < 50) {
			printf("The letter grade is: F.\n");
		}
		if (t1&&t2 < 50) {
			printf("The letter grade is: F.\n");
		}
		else {
			printf("The letter grade is: A.\n");
		}
	}
	/*1d*/
	else {
		if (average >= 70){
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			else{
				printf("The letter grade is: B.\n");
			}		
		}
		if (average >= 60){
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			else{
				printf("The letter grade is: C.\n");
			}	
		}	
		if (average >= 50){
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			if (t1&&t2 < 50) {
				printf("The letter grade is: F.\n");
			}
			else{
				printf("The letter grade is: D.\n");
			}	
		}		
		else {
			printf("The letter grade is: F.\n");		
		}	
	}

  /* Excercise 4 */
  float n;
  printf("\nExcercise #4:\n");
  printf("Input a number to be judged on the Richter Scale: ");
  scanf("%f", &n);
  
  /* Using if/else statements */
  if (5.0 > n){
    printf("\nRichter Scale Number(n)\t\tCharacterization\n");
    printf("n < 5.0\t\t\t\t\t\tLittle or no damage\n");
  }
  if (5.5 > n && n >= 5.0){
    printf("\nRichter Scale Number(n)\t\tCharacterization\n");
    printf("5.0 ≤ n < 5.5\t\t\t\tSome damage\n");
  }
  if (6.5 > n && n >= 5.5){
    printf("\nRichter Scale Number(n)\t\tCharacterization\n");
    printf("5.5 ≤ n < 6.5\t\t\t\tSerious damage: Walls may crack or fall\n");
  }
  if (7.5 > n && n >= 6.5){
    printf("\nRichter Scale Number(n)\t\tCharacterization\n");
    printf("6.5 ≤ n < 7.5\t\t\t\tDisaster: Houses and buildings may collapse\n");
  }
  if (n >= 7.5){
    printf("\nRichter Scale Number(n)\t\tCharacterization\n");
    printf("n ≥ 7.5\t\t\t\t\t\tCatastrophe: Most buildings destroyed\n");
  }

  /* On using switch statements 
     One first glance, switch statements seem to be interchangeable with if/else statements. However that cannot be further from the truth. If/else statements are the more versitile out of the two. Switch statements while faster can only accept either char or int data types. They can only accept exact values so what is done for excercise 4 is not possible with switch statements. It may be possible to do this excercise with switch statements but from personal tests I can say that it is improbable. 
  */
  
  /* Excercise 5 */
  /*
  a) expression result = 1
  b) No the parentheses are not required.
  d) !(a && b) != !a || !b 
  c) !a  
 
  */
  
  /* Part 2 - Discovery */
  /*
  '=' is used only for declaring variables while '==' is used for
  saying that a variable is equal to a certain value or character.
  For example, 'x = 1' means that a variable named 'x' has a value of
  one. While 'x == 1' is used to declare that x has to be equal to one
  during a if/else statement.
  
  */

	
	return(0);
}

