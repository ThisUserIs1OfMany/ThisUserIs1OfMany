/*
Name - Tamim Chowdhury
Lab Section - 3
Student# - 501033638

Lab 8 - Excercise 1
*/

#include <stdio.h>
int checkdiag(int matrix[][100], int size);

int main(void){
	FILE *p;
	p=fopen("matrix1.txt","r");
	int a[3][3],x,q;
	int i, j;
	for(i=0; i<3; i++){
		for (j=0; j<3; j++){
			fscanf(p, "%d", &x);
			a[i][j]=x;
		}
	}
	
	printf("Numbers are:\n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%d, ", a[i][j]);
		}
		printf("\n");
	}
	
	q = checkdiag(a, 3);
	if (q==1)
		printf("All diagonals are equal\n");
	else
		printf("All diagonals are not equals\n");
	
	return 0;
}

int checkdiag(int matrix[][100], int size){
	int i, j, p, q, r;
	
	for (i=0; i<size; i++){
		for (j=0; j<size; j++){
			p = matrix[0][0];
			q = matrix[1][1];
			r = matrix[2][2];
		}
	}
	
	if (p==q && q==r && r==p)
		return(1);
	else
		return(-1);
}
