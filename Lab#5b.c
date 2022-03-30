#include <stdio.h>
#include <math.h>

int main()
{
  FILE *datasample;
  int i, b_num, num_orgs_per_100, num_samples, total, average;
  datasample = fopen("test.txt", "r");

  
  while (fscanf(datasample, "%d%d", &b_num, &num_samples) != EOF)
  {
  printf("%d\t%d\t", b_num,num_samples);

  for(i=0; i<num_samples; i++)
  {
  fscanf(datasample, "%d", &num_orgs_per_100);
  printf("%d\t", num_orgs_per_100);
  total += num_orgs_per_100;
  }
  
  if (num_samples == 0)
  {
  printf("\nBeach is closed\n\n");
  }
  
  else
  {
  average = total/num_samples;
  printf("\nTotal number of organisms per 100ml - %d\n", total);
  printf("Average number of organisms per 100ml - %d\n",average);
  
  if (average <= 3500)
  {
  printf("Beach is open\n\n");
  }
  else
  {
  printf("Beach is closed\n\n");
  }
  }

  total = 0;
  average = 0;
  printf("\n");
  }

  fclose(datasample);
  return 0;



  
}

