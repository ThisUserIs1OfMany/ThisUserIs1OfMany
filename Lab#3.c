/*
 * Lab #3
 * Lab purpose: 
 * The purpose of this lab is to learn how to write a program to solve 
 * a stated problem, requiring you to design the solution, use the 
 * editor to enter the source program, eliminate the syntax errors, 
 * and then test the program. This will be the process followed in all
 * the remaining labs.
 */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main(void)
{
	/* Excercise #1 */
	printf("Excercise #1: \n");
	//
	int a;
	int b;
	int c;
	int d;
	//
	printf("1a) Input 4 numbers (separate each one with a space): ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int E1b = a + b + c + d;
	printf("1b) Sum of inputed numbers: %d\n", E1b);
	int E1c = (a+ b) - (c-d);
	printf("1c) Difference between sum of first 2 numbers and sum of the last 2: %d\n", E1c);
	int E1d = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2);
	printf("1d) Sum of squares of inputed numbers: %d\n", E1d);
	float E1e = sqrt(E1d)/E1b;
	printf("1e) Quotient of inputed numbers: %.2f\n", E1e);
	
	/* Excercise #2 */
	float m1 = 100;
	float m2 = 200;
	float m3 = 400;
	float m4 = 800;
	//
	float yd1 = m1*1.094;
	float yd2 = m2*1.094;
	float yd3 = m3*1.094;
	float yd4 = m4*1.094;
	//
	float mi1 = m1/1609;
	float mi2 = m2/1609;
	float mi3 = m3/1609;
	float mi4 = m4/1609;
	//
	printf("\nExcercise #2: \n");
	printf("Table of Distace Equivalents:\n");
	printf("Meters(m)\tYards(yd)\tMiles(mi)\t\n");
	printf("%.2f\t\t%.2f\t\t%f\n", m1, yd1, mi1);
	printf("%.2f\t\t%.2f\t\t%f\n", m2, yd2, mi2);
	printf("%.2f\t\t%.2f\t\t%f\n", m3, yd3, mi3);
	printf("%.2f\t\t%.2f\t\t%f\n", m4, yd4, mi4);
	
	/* Excercise #3 */
	printf("\nExcercise #3: \n");
	float r;
	printf("Input radius to determine volume of sphere: ");
	scanf("%f", &r);
	float v = 4/3*M_PI*pow(r, 3);
	printf("Volume of sphere (rounded to 2 decimals): %.2f", v);
	
	/* Excercise #4 */
	printf("\n\nExcercise #4: \n");
	//
	float angleA;
	printf("Input the 1st angle of your triangle: ");
	scanf("%f", &angleA);
	//
	float angleB;
	printf("Input the 2nd angle of your triangle: ");
	scanf("%f", &angleB);
	//
	float angleC = 180 - (angleA + angleB);
	printf("The 3rd angle of your triangle(rounded to 2 decimals): %.2f", angleC);
	
	/* Excercise #5 */
	float num1;
	float num2;
	//
	printf("\n\nExcercise #5: \n");
	printf("Input two numbers(separate with spaces): ");
	scanf("%f %f", &num1, &num2);
	//
	float num3 = (num1 + num2) * 3;
	float num4 = num1 + num2;
	//
	if ((num1 == num2)) {
		printf("Number1 and 2 are the same(sum is trippled) - %.2f", num3);
	}
	else {
		printf("Sum of Number1 and 2 is - %.2f", num4);
	}
	
	/*Excercise #6*/
	int numA;
	int numB;
	int numC;
	//
	printf("\n\nExcercise #6: \n");
	printf("Input 3 integer numbers: ");
	scanf("%d %d %d", &numA, &numB, &numC);
	//
	if (((numA > numB) & (numA > numC))){
		if ((numB > numC)){
			printf("Decending order: %d, %d, %d", numA, numB, numC);
		}
		else{
			printf("Decending order: %d, %d, %d", numA, numC, numB);
		}
	}
	//
	if (((numB > numA) & (numB > numC))){
		if ((numA > numC)){
			printf("Decending order: %d, %d, %d", numB, numA, numC);
		}
		else{
			printf("Decending order: %d, %d, %d", numB, numC, numA);
		}
	}
	//
	if (((numC > numB) & (numC > numA))){
		if ((numB > numA)){
			printf("Decending order: %d, %d, %d", numC, numB, numA);
		}
		else{
			printf("Decending order: %d, %d, %d", numC, numA, numB);
		}
	}
	//
	else{
		printf("One or more numbers are the same.");
	}
	return 0;
}
