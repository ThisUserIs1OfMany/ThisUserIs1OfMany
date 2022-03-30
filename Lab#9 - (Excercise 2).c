/* Excercise #2 */
#include <stdio.h>
struct strength {
	float p;		
	float d;	
	float Area;
	float stress;
	float strain;
};

int main(void){	
	struct strength s;
	printf("Enter compression load: ");
	scanf("%f", &s.p);
	printf("Enter diameter: ");
	scanf("%f", &s.d);
	s.Area = (3.14*s.d*s.d)/4;
	s.stress = s.p/s.Area;
	s.strain = s.stress/(30*10^6);
	printf("\n");
	printf("Load\tDiameter\tStress\tStrain\n");
	printf("%0.1f\t%0.1f\t\t%0.1f\t%0.8f\n", s.p,s.d,s.stress,s.strain);
	return 0;
};

