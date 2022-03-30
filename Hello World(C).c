#include <stdio.h>
#include <math.h>
#define MINUTE 60
#define M_LITER 1000
#define SENTINEL 5
 
int getProblem(void);
void getRateDropFactor(double *, double *);
void getKgRateConc(double *, double *, double *);
void getUnitsConc(double *, double *);
double figDropsMin(double, double);
double figmLHr(double);
double byWeight(double, double, double);
double byUnits(double, double);
 
int main (void)
{
   int value; //switch case option
   double answer, mlHour, dropsMl, mgKgHour, patWeight, mgMl, unitsHour, unitsMl, numHours;
 
   value = getProblem();
   //printf("%d\n", value);
   while(value != SENTINEL)
   {
       switch(value)
       {
           case 1:
               getRateDropFactor(&mlHour, &dropsMl);
               answer = figDropsMin(mlHour, dropsMl);
               printf("The rate in drops/min is: %.3lf\n\n", answer);
               break;
           case 2:
               printf("\nPlease enter a number of hours it take to deliver 1 liter of medicine: ");
               scanf("%lf", &numHours);
               answer = figmLHr(numHours);
               printf("The rate in mL/hour is %.3lf\n\n", answer);
               break;
           case 3:
               getKgRateConc(&mgKgHour, &patWeight, &mgMl);
               //printf("rate %lf, weight %lf, conc %lf\n", mgKgHour, patWeight, mgMl);
               answer = byWeight(mgKgHour, patWeight, mgMl);
               printf("The rate in mL/hour is: %.3lf\n\n", answer);
               break;
           case 4:
               getUnitsConc(&unitsHour, &unitsMl);
               answer = byUnits(unitsHour, unitsMl);
               printf("The rate in mL/hour is: %.3lf\n\n", answer);
               break;
           default:
               printf("Wrong input.\n\n");
       }
       value = getProblem();
   }
   return(0);
}
 
/*
display menu and get data
display menu, take input and return problem number selected
*/
int getProblem(void)
{
   int menuNumber;
 
   printf("GIVEN A MEDICAL IN ORDER IN\t\t\t\tCALCULATE IN\n");
   printf("(1) mL/Hour & tubing drop factor\t\t\tDrops/Minute\n");
   printf("(2) 1 L for n Hour\t\t\t\t\tmL/Hour\n");
   printf("(3) Mg/Kg/Hour & concentration in mg/ml\t\t\tmL/Hour\n");
   printf("(4) Units/Hour & concentration in units/ml\t\tmL/Hour\n");
   printf("(5) QUIT\n");
   scanf("%d", &menuNumber);
   return(menuNumber);
}
 
/*
get data
user enter rate and tubing factor for problem 1 then return back to main
*/
void getRateDropFactor(double *mLHour, double *dropsmL)
{
   printf("\nPlease enter the rate in mL/hour: ");
   scanf("%lf", &*mLHour);
   printf("Please enter tubing's drop factor: ");
   scanf("%lf", &*dropsmL);
}
 
/*
get data
use enter rate, patient's weight and concentration for problem 3 then return back to main thru parameter
*/
void getKgRateConc(double *mgKgHour, double *patWeight, double *mgMl)
{
   printf("\nPlease enter rate in mg/Kg/hour: ");
   scanf("%lf", &*mgKgHour);
   printf("Please enter the patient's weight in kg: ");
   scanf("%lf", &*patWeight);
   printf("Please enter the concentration in mg/mL: ");
   scanf("%lf", &*mgMl);
}
 
/*
get data
user enter rate and concentration for problem 4 then return back to main parameter
*/
void getUnitsConc(double *unitsHour, double *unitsmL)
{
   printf("\nPlease enter the rate in units/hr: ");
   scanf("%lf", &*unitsHour);
   printf("Please enter the concentration in units/mL: ");
   scanf("%lf", &*unitsmL);
}
 
/*
calculation
take rate and concentration then return it as drop/min
*/
double figDropsMin(double mLHour, double dropsmL)
{
   double dropsPerMins;
   dropsPerMins = (mLHour * dropsmL) / MINUTE;
   return(round(dropsPerMins)); //round to the nearest whole number
}
 
/*
calculation
take number of hours which 1 liter is delivered and return it as mL/hour
*/
double figmLHr(double numHours) //rounded
{
   double mLPerHr;
   mLPerHr = M_LITER / numHours;
   return(mLPerHr);
}
 
/*
calculation
take rate in mg/kg/hr, patient's weight in kg and concentration of drug in mg/mL then return as mL/hr
*/
double byWeight(double mgKgHr, double patWeight, double mgmL)
{
   double mLPerHr;
   mLPerHr = (mgKgHr * patWeight) / mgmL;
   return(mLPerHr);
}
 
/*
calculation
take rate in units/hr and concentration in units/mL then return as mL/hr
*/
double byUnits(double unitsHour, double unitsmL)
{
   double mLPerHr;
   mLPerHr = unitsHour / unitsmL;
   return(mLPerHr);
}
