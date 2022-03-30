/*
Name - Tamim Chowdhury
Lab Section - 3
Student# - 501033638

Lab 8 - Excercise 2
*/

#include <stdio.h>
#include <stdlib.h>

int count_zeros (int arr[ ], int size);
int count_negas (int arr[ ], int size);

int main(void){
	FILE *p;
	p = fopen("dataA.txt", "r");
	int i, j, how_many, c1, c2;
	int *ptr_1, *arr;
	fscanf(p, "%d", &how_many);
	ptr_1 = (int*)malloc(sizeof(int));
	*ptr_1=7;
	printf("Value of ptr_1 is %d\n", *ptr_1);
	arr=(int*)malloc(sizeof(int)*5);
	printf("Enter five elements:\n");
	
	for (i=0; i<5; i++){
		scanf("%d", arr+i);		/* &arr[i] */
	}
	
	printf("\nElements are: \n");
	for (i=0; i<5; i++){
		printf("%d\n", *(arr+i));	/* arr[i] */
	}

	free(arr);
	arr=(int*)malloc(sizeof(int)*how_many);
	for (j=0; j<4; j++){
		fscanf(p, "%d", (arr+j));
	}
	
	c1=count_zeros(arr, 5);
	printf("Number of zeroes: %d\n", c1);
	
	c2=count_negas(arr, 5);
	printf("Number of negatives: %d\n", c2);
	
	return 0; 
}

int count_zeros(int arr[ ], int size){
	int i,c;
	for (i=0; i<size; i++){
		if(arr[i]==0)
			c++;
	}
	return c; 
}

int count_negas(int arr[ ], int size){
	int i,c = 0;
	for (i=0; i<size; i++){
		if (arr[i]<0)
			c++;
	}
	return c;
}

