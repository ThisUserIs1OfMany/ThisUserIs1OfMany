/* Excercise #1 */
#include <stdio.h>

struct shape {
	float line;
	float radius;
	float areacircle;
	float areacylinder;
	float volumecylinder;
};

int main (void){
	struct shape s;
	printf("Enter height: ");
	scanf("%f", &s.line);
	printf("Enter radius: ");
	scanf("%f", &s.radius);
	s.areacircle = 3.14*s.radius*s.radius;
	s.areacylinder = 2*3.14*s.radius*s.line;
	s.volumecylinder = 3.14*s.radius*s.radius*s.line;
	printf("\n");
	printf("Area of circular cross selection = %f\n",s.areacircle);
	printf("Surface Area of cylinder = %f\n",s.areacylinder);
	printf("Volume of Cylinder = %f\n",s.volumecylinder);
	return 0;
}
