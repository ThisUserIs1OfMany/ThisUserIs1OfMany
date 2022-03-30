/*
 * Name: Tamim.C
 * Section: 03
 * Student Number:
 * 
 * Lab #2
 * Lab purpose:
 * The purpose of this lab is to learn how to use the Geany IDE 
 * (Integrated Development Environment), to know about the basic steps
 * to write a C program, and to understand common compiling and
 * runtime errors.
 *
 */

/* Part 1 */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(void)
{
	/*Excercise #1*/ 
	printf("Excercise #1:\n\n");
	printf("This\nis\nmy\nfirst\nC\nprogram.");
	
	/*Excercise #2*/
	printf("\n\nExcercise #2:\n\n");
	printf("X O X\nX X O\nO O X");

	/*Excercise #4*/
	printf("\n\nExcercise #4:\n");
	float number;
	printf("Input any real number and it will be rounded: ");
	scanf("%f", &number);
	int oneA = number/100 * 100;
	int oneB = number/1000 * 1000;
	printf("Number (rounded to hundreth): %d\n", oneA);
	printf("Number (rounded to thousandth): %d\n", oneB);
	printf("Number (rounded to 1 decimal): %.1f\n", number);	
	
	/*Excercise #5*/
	printf("\nExcercise #5:\n");
	float aR;
	float bR;
	printf("Input a long radius: ");
	scanf("%f", &aR);
	printf("Input a short radius: ");
	scanf("%f", &bR);
	float c1 = ((aR*aR) + (bR*bR))/2;
	float cFinal = 2*M_PI*sqrt(c1);
	printf("Circumference of elipse: %.2f\n\n",cFinal);
	return 0;
}

/*Excercise #3 - original*/
/*
#include <stdio.h>

inx
main (void)
{
	int a = 3; b = 4, e;
	Double f = 4, c, d;

	d = a + b;
	c = a / (f - b);
	printf (The value of d is %d"\n, d)
	return (0);
}
*/

/*Excercise #3 - Corrected*/
/*
#include <stdio.h>

int main(void)
{
	printf("\n\nExcercise #3:\n");
	int a = 3; 
	int b = 4;
	int f = 4;
	int d = a + b;
	printf("A = %d, B = %d, F = %d",a,b,f);
	printf("\nThe value of d is %d.\n",d);
	return(0)
}
*/

/*Excercise #6*/
/* #1 - 'char' refers to a data type that involves characters while 
 * 		'Char' doesn't have any importance in the C language. 
 *
 * #2 - If 'printf ("%d", 3/4);' is used then only '0' will appear once run.  
 * 
 * #3 - 'printf ("%f", 50);' is invalid as it shows an error.
 * 
 * #4 - If you remove the ';', it will not work. It will display an eror.
 * 
 * #5 - '%f' refers to any float variable used in a 'printf' or 'scanf' line.
 * 		'%lf' referes to any double variable used in a 'printf' or 'scanf' line.
 * 
 * #6 - If you divide by 0, you will get a error message.
 * 
 * #7 - The expression '35%15.3' is invalid.
 * 
 * #8 - 'main()' returns an error while 'int main (void)' lets you run a program
 * 		before ending with a termination message.
 * 
 * #9 - If you use '%c' to display an integer between 0 and 255, it will still display.
 * 		It will display as a character instead of a interger.
 * 
 * #10 - '5/3', '5%3', '5.0/3' display differenet values.
*/ 

/* Part 2 */
/*
 * i - 'printf' is a output statement, displaying what is inside it.
 * 	   'scanf' is a input statement, taking whatever a user inputs in it.
 * 
 * ii - integer variables have a smaller size but exclude any decimals.
 * 		double variables are larger while being able to display more characters
 * 		compared to float. 
 */

