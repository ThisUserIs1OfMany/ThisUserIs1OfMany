/*
 Name - Tamim Chowdhury
 Lab Section - 3
 Student# - 501033638
 
 LAB #5
 Purpose:
 This lab helps you to apply the concepts of iteration and, in 
 particular, nested loops in C, and to provide further practice in 
 implementing selections in C. In this lab you are going to determine, 
 from water quality measurements, whether or not a beach should be 
 closed for swimming. A real world set of exercises.
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	/* Part a */
	printf("Part A:\n");
	int a; 
	scanf("%d", &a);
	printf("Number inputed: %d\n\n", a);
	
	/* Part b */
	printf("Part B:\n");
	const int max = 5;
	int i, b;
	for(i = 0; i < max; i++){
		scanf("%d", &b);
		printf("%d\n\n", b);
	}
	
	/* Part c */
	printf("Part C:\n");
	printf("Enter numbers for beach number, number of samples and number of organims per 100 ml of water: \n");
	int b_num, num_samples, num_orgs_per_100;
	scanf("%d %d %d", &b_num, &num_samples, &num_orgs_per_100);
	printf("bnum = %d\n", b_num);
	printf("numsamples = %d\n", num_samples);
	printf("numorgsper100 = %d\n\n", num_orgs_per_100);
	
	/* Part d */
	printf("Number of samples: ");
	scanf("%d", &num_samples);
  
	for (i = 0; i < num_samples; i++){
		printf("Enter number of organisims per 100ml: ");
		scanf("%d", &num_orgs_per_100);
		printf("Organisms - %d", num_orgs_per_100);
	}
	
	return 0;
}

