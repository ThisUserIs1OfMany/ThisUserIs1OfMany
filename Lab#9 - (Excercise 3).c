/* Excercise #3 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car{
	char make[20];
	char model[20];
	char color[20];
	int year;
};
struct car *ptr;
void display(struct car, *p);

int main(void){
	ptr = (struct car*)malloc(sizeof(struct car)*2);
	for (int i=0; i<2; i++){
			printf("Enter make, model and year\n");
			scanf("%s%s%s%d",(ptr+i)->make,(ptr+i)->model,(ptr+i)->color,&(ptr+i)->year);
	}
	display(ptr);
	return 0;
}

void display(struct car, *p){
	printf("Make\tModel\tColor\tYear\n");
	for(int i=0; i<2; i++){
		if(strcmp((p+i)->color,"yellow")==0 && (p+i)->year->2010){
			printf("%s\t%s\t%s\t%d\n", (p+i)->make,(p+i)->model,(p+i)->color,(p+i)->year)
		}
	}
}
